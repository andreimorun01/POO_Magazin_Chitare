#include "Magazin_Chitare.h"
//#include "Chitara.h"
#include "Chitara_Acustica.h"
//#include "Chitara_Electrica.h"
#include "Client.h"
#include <vector>
#include <fstream>
#include <cstring>


/*void Cautare()
{


}
*/
int main()
{
     std::string a;

     std::ifstream f("Date.in");
     std::vector <Chitara> V;
     //std::cout<<a;
    while(!f.eof())
    {

        f>>a;
        if(a == "Chitara"){
            f >>a;
            if (a == "acustica")
            {
                f >> a;
                std::string Nume_Chitara= "Chitara acustica" + a;

                int b;
                f >> b;
                int Nr_Corzi = b;

                f >> a;
                std::string Tip_Lemn = a;

                f >> a;
                std::string magazin= a;

                f >> a;
                std::string Tip_Corzi = a;

                f >> a;
                std::string Tip_Chitara = a;

                Chitara_Acustica c(Nume_Chitara, Nr_Corzi, Tip_Lemn, magazin, Tip_Corzi, Tip_Chitara);
                V.push_back(c);

            }

            else if(a == "electrica")
            {
                f >> a;
                std::string Nume_Chitara= "Chitara electrica" + a;

                int b;
                f >> b;
                int Nr_Corzi = b;

                f >> a;
                std::string Tip_Lemn = a;

                f >> a;
                std::string magazin= a;

                int c;
                f >> c;
                int Numar_Duze = c;

                f >> a;
                std::string Tip_EQ = a;

                bool e;
                f>>e;
                bool amplificator=e;

                Chitara_Electrica d (Nume_Chitara, Nr_Corzi, Tip_Lemn, magazin, Numar_Duze, Tip_EQ, amplificator);
                V.push_back(d);

            }
        }

    }
    for(auto&i:V)
       std::cout<<i<<std::endl;

    return 0;
}
