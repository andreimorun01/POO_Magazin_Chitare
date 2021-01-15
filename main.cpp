#include "Magazin_Chitare.h"
//#include "Chitara.h"
#include "Chitara_Acustica.h"
//#include "Chitara_Electrica.h"
#include "Client.h"
#include <vector>
#include <fstream>
#include <cstring>
#include <stdexcept>


/*void Cautare()
{


}
*/
int main()
{
     std::string a;
     std::ifstream f("Date.in");
     std::vector <Chitara *> V;
     std::vector <Magazin_Chitare> Magazine;
     Magazin_Chitare *Store;
     Chitara *P;
     Amplificator Amp;
     //std::cout<<std::endl;
     int y=0;
     while(f>>a)
    {

        //f>>a;
        if(a == "Chitara"){
            f >>a;
            if (a == "acustica")
            {
                f >> a;
                std::string Nume_Chitara= "Chitara acustica " + a;

                int b;
                f >> b;
                int Nr_Corzi = b;

                f >> a;
                std::string Tip_Lemn = a;

                f >> a;
                std::string magazin= a;
                bool gasit=false;
                for(auto &i:Magazine)
                {
                    if(i.getNumeMagazin()==magazin)
                    {
                        gasit=true;
                        Store=&i;
                    }

                }
                if(!gasit)
                {
                    //Store = new Magazin_Chitare(magazin);
                    //Magazine.push_back(*Store);
                    Magazine.push_back(Magazin_Chitare(magazin));
                    Store=&Magazine.back();

                }


                f >> a;
                std::string Tip_Corzi = a;

                f >> a;
                std::string Tip_Chitara = a;

                P=new Chitara_Acustica (Nume_Chitara, Nr_Corzi, Tip_Lemn, *Store, Tip_Corzi, Tip_Chitara);
                V.push_back(P);

            }

            else if(a == "electrica")
            {
                f >> a;
                std::string Nume_Chitara= "Chitara electrica " + a;

                int b;
                f >> b;
                int Nr_Corzi = b;

                f >> a;
                std::string Tip_Lemn = a;

                f >> a;
                std::string magazin= a;
                bool gasit=false;
                for(auto &i:Magazine)
                {
                    if(i.getNumeMagazin()==magazin)
                    {
                        gasit=true;
                        Store=&i;
                    }

                }
                if(!gasit)
                {
                    //Store = new Magazin_Chitare(magazin);
                    //Magazine.push_back(*Store);
                    Magazine.push_back(Magazin_Chitare(magazin));
                    Store=&Magazine.back();
                }

                int c;
                f >> c;
                int Numar_Duze = c;

                f >> a;
                std::string Tip_EQ = a;

                bool e;
                f>>e;
                bool amplificator=e;

                P= new Chitara_Electrica (Nume_Chitara, Nr_Corzi, Tip_Lemn, *Store, Numar_Duze, Tip_EQ, amplificator);
                V.push_back(P);


            }
        }

    }

    f.close();
    int optiune=1;
    while (optiune !=0)
    {
        std::cout<<"Alegeti optiunea dvs: \n";
        std::cout<<"0 - Inchidere program \n";
        std::cout<<"1 - Afisare stoc chitare \n";
        std::cout<<"2 - Adaugare chitara in stoc \n";
        std::cout<<"3 - Se vinde o chitara catre un client \n";

        std::cin>>optiune;
        if(optiune == 1)
        {
            for(int i=0;i<V.size();i++)
            {
                V[i]->Afisare();
                std::cout<<std::endl;
            }
        }
        else if(optiune == 2)
        {

            std::string Nume, Tip_Lemn, Tip_Corzi, Tip_Chitara, Tip_EQ;
            int Numar_Corzi, Numar_Duze;
            std::string magazin;
            std::string optiune;
            bool Amplificator;
            std::cout << "Tip Chitara - Acustica sau Electrica - > ";
            std::cin >> optiune;
            std::cout << "Nume Chitara: ";
            std::cin >> Nume;
            std::cout << "Numar corzi: ";
            std::cin >> Numar_Corzi;
            std::cout << "Tip lemn: ";
            std::cin >> Tip_Lemn;
            std::cout << "Nume magazin: ";
            std::cin >> magazin;
            bool gasit = false;
            for (auto &i:Magazine) {
                if (i.getNumeMagazin() == magazin) {
                    gasit = true;
                    Store = &i;
                }

            }
            if (!gasit) {
               // Store = new Magazin_Chitare(magazin);
                //Magazine.push_back(*Store);
                Magazine.push_back(Magazin_Chitare(magazin));
                Store=&Magazine.back();

            }

            if(optiune=="Acustica")
            {
                std::ofstream f("Date.in", std::ios::app);
                Nume="Chitara Acustica " + Nume;
                std::cout<<"Tip corzi: ";
                std::cin>>Tip_Corzi;
                std::cout<<"Tip chitara: ";
                std::cin>>Tip_Chitara;
                P=new Chitara_Acustica (Nume, Numar_Corzi, Tip_Lemn, *Store, Tip_Corzi, Tip_Chitara);
                V.push_back(P);
                f<<Nume<<"\n";
                f<<Numar_Corzi<<"\n";
                f<<Tip_Lemn<<"\n";
                f<<Store->getNumeMagazin()<<"\n";
                f<<Tip_Corzi<<"\n";
                f<<Tip_Chitara<<"\n";
                f.close();

            }
            else if(optiune=="Electrica")
            {
                std::ofstream f("Date.in", std::ios::app);
                Nume="Chitara Electrica " + Nume;
                std::cout<<"Numar duze: ";
                std::cin>>Numar_Duze;
                std::cout<<"Tip EQ: ";
                std::cin>>Tip_EQ;
                std::cout<<"Are amplificator? (1-are, 0-nu are): ";
                std::cin>>Amplificator;
                if(Amplificator==1)
                    Amp=new class Amplificator(true);
                else
                    Amp=new class Amplificator(false);
                P= new Chitara_Electrica (Nume, Numar_Corzi, Tip_Lemn, *Store, Numar_Duze, Tip_EQ, Amp);
                V.push_back(P);
                f<<Nume<<"\n";
                f<<Numar_Corzi<<"\n";
                f<<Tip_Lemn<<"\n";
                f<<Store->getNumeMagazin()<<"\n";
                f<<Numar_Duze<<"\n";
                f<<Tip_EQ<<"\n";
                f<<Amp<<"\n";
                f.close();

            }
            std::cout<<std::endl;

        }
        else if(optiune==3)
        {
            std::ofstream f("Date.in", std::ios::app);
            int index;
            std::string Nume_Client, Prenume_Client;
            int Varsta;
            std::string Adresa;
            std::cout<<"Introduceti datele clientului \n";
            std::cin.get();
            std::cout<<"Numele Clientului: ";
            std::cin>>Nume_Client;
            std::cout<<"Prenume Clientului: ";
            std::cin>>Prenume_Client;
            Nume_Client=Nume_Client + Prenume_Client;
            std::cout<<"Varsta clientului: ";
            std::cin>>Varsta;
            std::cout<<"Adresa Clientului unde se livreaza chitara: ";
            std::cin>>Adresa;
            std::cout<<std::endl;
            std::cout<<"Alegeti chitara dorita de cumparator \n";
            for(int i=0;i<V.size();i++)
            {
                std::cout<<i<<" ";
                V[i]->Afisare();
                std::cout<<std::endl;
            }
            std::cout<<"Introduceti indexul chitarii: ";
            std::cin>>index;
            try
            {
                V.at(index)->setNumeChitara(V.at(index)->getNumeChitara() + " Vanduta catre "+ Nume_Client + " la adresa " + Adresa);
                std::cout<<"\nChitara cu indexul "<<index<<"a fost cumparata de "<<Nume_Client<<" la adresa: "<<Adresa<<"\n";
            }
            catch (std::out_of_range x)
            {
                x.what();
                std::cout<<"Indexul nu este in range "<<x.what()<<"\n";
            }
            for(int i=0;i<V.size();i++)
            {
                if(i==index)
                    f<<V[index]->getNumeChitara();
            }




        }

    }
    for(auto & i : V)
    {
        delete i;
    }


    return 0;
}
