/*
Author: Jose Angel Garcia Gomez
Date: 02/2021
Description: Program that contains the Class definition of the Oficial class
*/

#ifndef OFICIAL_H_
#define OFICIAL_H_
#include <iostream>
#include <string>
using namespace std;

class Oficial{
    private:

    int noIdentificacion;
    string nombre;
    string rango;
    
    public:
    Oficial();
    Oficial(int id, string nom, string ran);
    void display();
};


#endif