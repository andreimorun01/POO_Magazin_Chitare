//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_CLIENT_H
#define MAGAZIN_CHITARE_CLIENT_H

#endif //MAGAZIN_CHITARE_CLIENT_H

class Client
{
private:
    std::string Nume_Client;
    int Varsta;
    std::string Adresa;
public:
    Client(std::string Nume_Client, int Varsta, std::string Adresa);
    ~Client()
    {

    }
};