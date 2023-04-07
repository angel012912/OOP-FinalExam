#ifndef DESTRUCTOR_H_
#define DESTRUCTOR_H_
#include <iostream>
#include <string>
#include "navio.h"
using namespace std;

class Destructor: public Navio{
    private:
    double velocidadDisparo; 
    //El poder se multiplica por la velocidad de disparo para obtener su poder Total

    public:
    Destructor(double vel, string nom, string id,double poder);
    double getPoderFuego();
    void display();
};

#endif