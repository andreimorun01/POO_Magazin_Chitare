//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_MAGAZIN_CHITARE_H
#define MAGAZIN_CHITARE_MAGAZIN_CHITARE_H

class Magazin_Chitare
{
    friend std::ostream & operator <<(std::ostream &, const Magazin_Chitare &);
private:
    std::string Nume_Magazin;
public:
    Magazin_Chitare(std::string Nume_Magazin);

    Magazin_Chitare(const Magazin_Chitare &Copie_Magazin);
    Magazin_Chitare()
    {

    };

    Magazin_Chitare & operator =(const Magazin_Chitare &Obiect);

    ~Magazin_Chitare()
    {

    }

    const std::string &getNumeMagazin() const {
        return Nume_Magazin;
    }


    void setNumeMagazin(const std::string &numeMagazin) {
        Nume_Magazin = numeMagazin;
    }

};
#endif //MAGAZIN_CHITARE_MAGAZIN_CHITARE_H