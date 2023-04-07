#ifndef TRANSPORTADOR_H_
#define TRANSPORTADOR_H_
#include <iostream>
#include <string>
#include "navio.h"
using namespace std;

class Transportador: public Navio{
    private:
    double cantidadSoldados; 
    //La cantidad de soldados se divide entre 5 y se multiplica por el poder para obtener el poder total.

    public:
    Transportador(double cant, string nom, string id,double poder);
    double getPoderFuego();
    void display();
};

#endif