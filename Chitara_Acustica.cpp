//
// Created by andrei on 14.11.2020.
//
#include "Chitara_Acustica.h"

Chitara_Acustica::Chitara_Acustica(std::string Nume_Chitara, int Nr_Corzi, std::string Tip_Lemn, Magazin_Chitare magazin, std::string Tip_Corzi, std::string Tip_Chitara)
{
    Chitara(Nume_Chitara, Nr_Corzi, Tip_Lemn, magazin);
    this->Tip_Corzi=Tip_Corzi;
    this->Tip_Chitara=Tip_Chitara;

}
std::ostream &operator<<(std::ostream &os, const Chitara_Acustica &acustica)
{
    os << static_cast<const Chitara &>(acustica) << " Tip_Corzi: " << acustica.Tip_Corzi << " Tip_Chitara: "
       << acustica.Tip_Chitara;
    return os;
}
const std::string &Chitara_Acustica::getTipCorzi() const {
    return Tip_Corzi;
}

const std::string &Chitara_Acustica::getTipChitara() const {
    return Tip_Chitara;
}


void Chitara_Acustica::setTipCorzi(const std::string &tipCorzi) {
    Tip_Corzi = tipCorzi;

}

void Chitara_Acustica::setTipChitara(const std::string &tipChitara) {
    Tip_Chitara = tipChitara;
}