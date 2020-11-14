//
// Created by andrei on 14.11.2020.
//
#include <iostream>
#include "Chitara_Electrica.h"

#ifndef MAGAZIN_CHITARE_CHITARA_ACUSTICA_H
#define MAGAZIN_CHITARE_CHITARA_ACUSTICA_H

#endif //MAGAZIN_CHITARE_CHITARA_ACUSTICA_H

class Chitara_Acustica : public Chitara
{
private:
    int Marime; //3,4,5,6,7
    bool Tip_Corzi; // 0->plastic, 1->metal
    bool Tip_Chitara;//0->clasica, 1->electroacustica
public:
    Chitara_Acustica(int Marime, bool Tip_Corzi, bool Tip_Chitara);
    ~Chitara_Acustica()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Chitara_Acustica &acustica);
};

std::ostream &operator<<(std::ostream &os, const Chitara_Acustica &acustica) {
    os << static_cast<const Chitara &>(acustica) << " Marime: " << acustica.Marime << " Tip_Corzi: "
       << acustica.Tip_Corzi << " Tip_Chitara: " << acustica.Tip_Chitara;
    return os;
}
