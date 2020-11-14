//
// Created by andrei on 14.11.2020.
//

#include "Magazin_Chitare.h"

Magazin_Chitare::Magazin_Chitare(std::string Nume_Magazin, bool Stoc)
{
    std::cout<<"Constructor ";
    this->Nume_Magazin=Nume_Magazin;
    this->Stoc=Stoc;

}

Magazin_Chitare::Magazin_Chitare(const Magazin_Chitare &Copie_Magazin)
{
    this->Nume_Magazin=Copie_Magazin.Nume_Magazin;
    this->Stoc=Copie_Magazin.Stoc;
}

Magazin_Chitare &Magazin_Chitare :: operator =(const Magazin_Chitare &Obiect)
{
    this->Nume_Magazin=Obiect.Nume_Magazin;
    this->Stoc=Obiect.Stoc;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Magazin_Chitare &Obj)
{
    os<<"Test"<<"\n";
    return os;
}
