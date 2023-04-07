#ifndef FLOTA_H_
#define FLOTA_H_
#include "navio.h"
#include "oficial.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class Flota{
    private:
    int idFlota;
    Oficial oficial;
    vector <Navio *> barcos;
    public:
    Flota();
    Flota(int id, Oficial of);
    double getTotalPoderFuego();
    void agregarNavio(Navio *bar);
    void displayFlota();
    void desplegar();
};
#endif