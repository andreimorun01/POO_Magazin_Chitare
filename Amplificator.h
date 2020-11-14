//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_AMPLIFICATOR_H
#define MAGAZIN_CHITARE_AMPLIFICATOR_H

#endif //MAGAZIN_CHITARE_AMPLIFICATOR_H

class Amplificator
{
private:
    std::string Nume_Amplificator;
public:
    Amplificator(std::string Nume_Amplificator);
    ~Amplificator()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Amplificator &amplificator);

};