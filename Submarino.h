/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that contains the Class definition of the Submarino class
*/

#ifndef SUBMARINO_H_
#define SUBMARINO_H_
#include <iostream>
#include <string>
#include "navio.h"
using namespace std;

class Submarino: public Navio{
    private:
    double tamañoTorpedo; 
    //El tamaño del torpedo se va a multiplicar por el poder Fuego y eso se le va a restar 10 para obtener su poder total. 

    public:
    Submarino(double tam, string nom, string id,double poder);
    double getPoderFuego();
    void display();
};

#endif