#include "flota.h"
#include <iostream>
#include <string>
using namespace std; 

Flota::Flota(int id, Oficial of)
{
    idFlota = id;
    oficial = of;

}
double Flota::getTotalPoderFuego(){
    double total;
    for (int i = 0; i < barcos.size(); i++){
        total = total + barcos[i]->getPoderFuego();
    }
    return total;
}

void Flota::agregarNavio(Navio* bar)
{
    barcos.push_back(bar);
}

void Flota::displayFlota(){
    cout << "Flota: " + to_string(idFlota) + " con oficial al mando: " ;
    oficial.display();
}

void Flota::desplegar(){
    for(int i=0;i<barcos.size();i++)
    {
        cout << to_string(i) + ": " ;
        barcos[i]->display();
    }
}