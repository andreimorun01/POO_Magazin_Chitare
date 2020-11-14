//
// Created by andrei on 14.11.2020.
//
#include "Amplificator.h"

Amplificator::Amplificator(std::string Nume_Amplificator)
{
    this->Nume_Amplificator=Nume_Amplificator;
}

std::ostream &operator<<(std::ostream &os, const Amplificator &amplificator) {
    os << "Nume_Amplificator: " << amplificator.Nume_Amplificator;
    return os;
}
