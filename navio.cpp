#include "navio.h"
#include <iostream>

using namespace std;

Navio::Navio(string nom, string id,double poder)
{
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
}

bool Navio::operator<(Navio &otro)
{
    if (poderFuego < otro.getPoderFuego()){
        return true;
    }
    else{
        return false;
    }
}