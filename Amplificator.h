//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_AMPLIFICATOR_H
#define MAGAZIN_CHITARE_AMPLIFICATOR_H

class Amplificator
{
private:
    bool Amplif;// 0-> are 1->nu are
public:
    Amplificator(bool Amplif);
    Amplificator()
    {

    }
    ~Amplificator()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Amplificator &amplificator);

    bool isAmplif() const {
        return Amplif;
    }

    void setAmplif(bool Amplif) {
        Amplificator::Amplif = Amplif;
    }
};
#endif //MAGAZIN_CHITARE_AMPLIFICATOR_H