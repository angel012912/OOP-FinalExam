/*
Author: Jose Angel Garcia Gomez
Description: Program that contains the Class Methods implementations of the Destructor class
*/

#include "destructor.h"
#include <iostream>

using namespace std;

Destructor::Destructor(double vel, string nom, string id,double poder):Navio(nom, id, poder){
    velocidadDisparo = vel;
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
}

double Destructor::getPoderFuego(){
    double poderTotal=velocidadDisparo*poderFuego;
    return poderTotal;
}

void Destructor::display(){
    cout<< "Destructor "+ nombre + " con ID: "+ idNavio + " y tengo un poder de fuego de: " + to_string(poderFuego) <<endl;
}