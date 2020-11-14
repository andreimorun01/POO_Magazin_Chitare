//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_MAGAZIN_CHITARE_H
#define MAGAZIN_CHITARE_MAGAZIN_CHITARE_H

class Magazin_Chitare
{
    friend std::ostream & operator <<(std::ostream &, const Magazin_Chitare &);
private:
    std::string Nume_Magazin;
    bool Stoc;/* 0-> este, 1-> nu este in stoc*/
public:
    Magazin_Chitare(std::string Nume_Magazin, bool Stoc);
    Magazin_Chitare(const Magazin_Chitare &Copie_Magazin);
    Magazin_Chitare & operator =(const Magazin_Chitare &Obiect);
    ~Magazin_Chitare()
    {
        std::cout<<"Destructor ";
    }
};

#endif //MAGAZIN_CHITARE_MAGAZIN_CHITARE_H