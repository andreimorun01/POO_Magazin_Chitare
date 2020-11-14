//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_CHITARA_H
#define MAGAZIN_CHITARE_CHITARA_H

#endif //MAGAZIN_CHITARE_CHITARA_H

class Chitara
{
private:
    std::string Nume_Chitara;
    int Numar_Corzi;
    bool Tip_Lemn; /* 0-> stejar 2-> mahon*/
public:
    Chitara(std::string Nume_Chitara, int Numar_Corzi, bool Tip_Lemn);
    Chitara()=default;

    friend std::ostream &operator<<(std::ostream &os, const Chitara &chitara);

    ~Chitara()
    {

    }
};