/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that contains the Class Methods Implementation of the Submarino class
*/

#include "Submarino.h"
#include <iostream>

using namespace std;

Submarino::Submarino(double tam, string nom, string id,double poder):Navio(nom, id, poder){
    tamañoTorpedo = tam;
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
}

double Submarino::getPoderFuego(){
    double poderTotal=(tamañoTorpedo*poderFuego)-10;
    return poderTotal;
}

void Submarino::display(){
    cout<< "Submarino "+ nombre + " con ID: "+ idNavio + " y tengo un poder de fuego de: " + to_string(poderFuego) <<endl;
}