//
// Created by andrei on 14.11.2020.
//
#include "Client.h"
Client::Client(std::string Nume_Client, int Varsta, std::string Adresa)
{
    this->Nume_Client=Nume_Client;
    this->Varsta=Varsta;
    this->Adresa=Adresa;
}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "Nume_Client: " << client.Nume_Client << " Varsta: " << client.Varsta << " Adresa: " << client.Adresa;
    return os;
}
