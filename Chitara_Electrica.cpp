//
// Created by andrei on 14.11.2020.
//

#include "Chitara_Electrica.h"

Chitara_Electrica::Chitara_Electrica(std::string Nume_Chitara, int Nr_Corzi, std::string Tip_Lemn, Magazin_Chitare magazin, int Numar_Duze, std::string Tip_EQ, Amplificator amplificator)
{
    Chitara(Nume_Chitara, Nr_Corzi, Tip_Lemn, magazin);
    this->Numar_Duze=Numar_Duze;
    this->Tip_EQ=Tip_EQ;
    this->amplificator=amplificator;
}

std::ostream &operator<<(std::ostream &os, const Chitara_Electrica &electrica) {
    os << static_cast<const Chitara &>(electrica) << " Numar_Duze: " << electrica.Numar_Duze << " Tip_EQ: "
       << electrica.Tip_EQ << " amplificator: " << electrica.amplificator;
    return os;
}
