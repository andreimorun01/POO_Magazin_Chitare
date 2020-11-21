//
// Created by andrei on 14.11.2020.
//
#include <iostream>

#ifndef MAGAZIN_CHITARE_CLIENT_H
#define MAGAZIN_CHITARE_CLIENT_H

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

    friend std::ostream &operator<<(std::ostream &os, const Client &client);

    const std::string &getNumeClient() const {
        return Nume_Client;
    }

    int getVarsta() const {
        return Varsta;
    }

    const std::string &getAdresa() const {
        return Adresa;
    }

    void setNumeClient(const std::string &numeClient) {
        Nume_Client = numeClient;
    }

    void setVarsta(int varsta) {
        Varsta = varsta;
    }

    void setAdresa(const std::string &adresa) {
        Adresa = adresa;
    }
};
#endif //MAGAZIN_CHITARE_CLIENT_H