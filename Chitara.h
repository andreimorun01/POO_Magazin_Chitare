//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#include "Magazin_Chitare.h"

#ifndef MAGAZIN_CHITARE_CHITARA_H
#define MAGAZIN_CHITARE_CHITARA_H

class Chitara :public Magazin_Chitare
{
private:
    std::string Nume_Chitara;
    int Numar_Corzi;
    std::string Tip_Lemn;
    Magazin_Chitare magazin;
public:
    Chitara(std::string Nume_Chitara, int Numar_Corzi, std::string Tip_Lemn, Magazin_Chitare magazin);

    Chitara()=default;

    friend std::ostream &operator<<(std::ostream &os, const Chitara &chitara);

    ~Chitara()
    {

    }

    const std::string &getNumeChitara() const {
        return Nume_Chitara;
    }

    int getNumarCorzi() const {
        return Numar_Corzi;
    }

    const std::string &getTipLemn() const {
        return Tip_Lemn;
    }

    const Magazin_Chitare &getMagazin() const {
        return magazin;
    }

    void setNumeChitara(const std::string &numeChitara) {
        Nume_Chitara = numeChitara;
    }

    void setNumarCorzi(int numarCorzi) {
        Numar_Corzi = numarCorzi;
    }

    void setTipLemn(const std::string &tipLemn) {
        Tip_Lemn = tipLemn;
    }

    void setMagazin(const Magazin_Chitare &magazin) {
        Chitara::magazin = magazin;
    }

    virtual void Afisare()
    {
        std::cout<<Nume_Chitara<<std::endl;
        std::cout<<Numar_Corzi<<std::endl;
        std::cout<<Tip_Lemn<<std::endl;
        std::cout<<magazin.getNumeMagazin()<<std::endl;
    }
};
#endif //MAGAZIN_CHITARE_CHITARA_H