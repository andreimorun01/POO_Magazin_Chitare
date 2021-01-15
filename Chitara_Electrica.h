//
// Created by andrei on 14.11.2020.
//
#include <iostream>
#include "Chitara.h"
#include "Amplificator.h"

#ifndef MAGAZIN_CHITARE_CHITARA_ELECTRICA_H
#define MAGAZIN_CHITARE_CHITARA_ELECTRICA_H

class Chitara_Electrica : public Chitara
{
private:
    int Numar_Duze;
    std::string Tip_EQ;
    Amplificator amplificator;

public:
    Chitara_Electrica(std::string Nume_Chitara, int Nr_Corzi, std::string Tip_Lemn, Magazin_Chitare magazin, int Numar_Duze, std::string Tip_EQ, Amplificator amplificator):Chitara(Nume_Chitara, Nr_Corzi, Tip_Lemn, magazin)
    {

        this->Numar_Duze=Numar_Duze;
        this->Tip_EQ=Tip_EQ;
        this->amplificator=amplificator;
    }
    ~Chitara_Electrica()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Chitara_Electrica &electrica);

    int getNumarDuze() const {
        return Numar_Duze;
    }

    const std::string &getTipEq() const {
        return Tip_EQ;
    }

    const Amplificator &getAmplificator() const {
        return amplificator;
    }

    void setNumarDuze(int numarDuze) {
        Numar_Duze = numarDuze;
    }

    void setTipEq(const std::string &tipEq) {
        Tip_EQ = tipEq;
    }

    void setAmplificator(const Amplificator &amplificator) {
        Chitara_Electrica::amplificator = amplificator;
    }

    virtual void Afisare()
    {
        Chitara::Afisare();
        std::cout<<Numar_Duze<<std::endl;
        std::cout<<Tip_EQ<<std::endl;
        std::cout<<amplificator.isAmplif()<<std::endl;
    }

};
#endif //MAGAZIN_CHITARE_CHITARA_ELECTRICA_H