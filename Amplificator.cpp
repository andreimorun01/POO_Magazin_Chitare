//
// Created by andrei on 14.11.2020.
//
#include "Amplificator.h"

Amplificator::Amplificator(bool Amplif)

{
    this->Amplif=Amplif;
}

std::ostream &operator<<(std::ostream &os, const Amplificator &amplificator) {
    os << "Amplif: " << amplificator.Amplif;
    return os;
}
