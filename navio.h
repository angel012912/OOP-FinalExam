#ifndef NAVIO_H_
#define NAVIO_H_
#include <iostream>
#include <string>
using namespace std;

class Navio
{
    protected:
    string idNavio;
    string nombre;
    double poderFuego;
    public:
    Navio(string nom,string id, double poderFuego);
    virtual double getPoderFuego()=0;
    virtual void display()=0;
    bool operator < (Navio &otro);
};

#endif