//
// Created by andrei on 14.11.2020.
//
#include "Chitara_Acustica.h"


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