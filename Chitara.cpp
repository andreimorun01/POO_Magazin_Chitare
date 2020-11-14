//
// Created by andrei on 14.11.2020.
//
#include "Chitara.h"

Chitara::Chitara(std::string Nume_Chitara, int Numar_Corzi, bool Tip_Lemn)
{
    this->Nume_Chitara=Nume_Chitara;
    this->Numar_Corzi=Numar_Corzi;
    this->Tip_Lemn=Tip_Lemn;
}

std::ostream &operator<<(std::ostream &os, const Chitara &chitara) {
    os << "Nume_Chitara: " << chitara.Nume_Chitara << " Numar_Corzi: " << chitara.Numar_Corzi << " Tip_Lemn: "
       << chitara.Tip_Lemn;
    return os;
}
