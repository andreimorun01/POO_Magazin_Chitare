//
// Created by andrei on 14.11.2020.
//
#include <iostream>
#include "Chitara_Electrica.h"

#ifndef MAGAZIN_CHITARE_CHITARA_ACUSTICA_H
#define MAGAZIN_CHITARE_CHITARA_ACUSTICA_H

class Chitara_Acustica : public Chitara
{
private:
    std::string Tip_Corzi;
    std::string Tip_Chitara;
public:
    Chitara_Acustica(std::string Nume_Chitara, int Nr_Corzi, std::string Tip_Lemn, Magazin_Chitare magazin, std::string Tip_Corzi, std::string Tip_Chitara);
    ~Chitara_Acustica()
    {

    }

    friend std::ostream &operator<<(std::ostream &os, const Chitara_Acustica &acustica);

    const std::string &getTipCorzi() const;

    void setTipCorzi(const std::string &tipCorzi);

    const std::string &getTipChitara() const;

    void setTipChitara(const std::string &tipChitara);



};
#endif //MAGAZIN_CHITARE_CHITARA_ACUSTICA_H

/*
 */

