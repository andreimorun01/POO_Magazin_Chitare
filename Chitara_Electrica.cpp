//
// Created by andrei on 14.11.2020.
//

#include "Chitara_Electrica.h"



std::ostream &operator<<(std::ostream &os, const Chitara_Electrica &electrica) {
    os << static_cast<const Chitara &>(electrica) << " Numar_Duze: " << electrica.Numar_Duze << " Tip_EQ: "
       << electrica.Tip_EQ << " amplificator: " << electrica.amplificator;
    return os;
}
