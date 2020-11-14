//
// Created by andrei on 14.11.2020.
//
#include <iostream>
#include "Chitara.h"
#include "Amplificator.h"

#ifndef MAGAZIN_CHITARE_CHITARA_ELECTRICA_H
#define MAGAZIN_CHITARE_CHITARA_ELECTRICA_H

#endif //MAGAZIN_CHITARE_CHITARA_ELECTRICA_H

class Chitara_Electrica : public Chitara
{
private:
    int Numar_Duze;
    bool Tip_EQ; /* 0->analogic 1->digital*/
    Amplificator amplificator;

public:
    Chitara_Electrica(int Numar_Duze, bool Tip_EQ, Amplificator amplificator);
    ~Chitara_Electrica()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Chitara_Electrica &electrica);

};