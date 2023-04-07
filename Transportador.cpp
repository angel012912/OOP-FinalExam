/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that contains the Class Methods Implementation of the Transportador class
*/

#include "Transportador.h"
#include <iostream>

using namespace std;

Transportador::Transportador(double cant, string nom, string id,double poder):Navio(nom, id, poder){
    cantidadSoldados = cant;
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
}

double Transportador::getPoderFuego(){
    double poderTotal=(cantidadSoldados/5)*poderFuego;
    return poderTotal;
}

void Transportador::display(){
    cout<< "Transportador "+ nombre + " con ID: "+ idNavio + " y tengo un poder de fuego de: " + to_string(poderFuego) <<endl;
}