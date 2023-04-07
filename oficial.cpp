#include "oficial.h"
#include <iostream>

using std::cout;
using std::endl;

Oficial::Oficial(){};
Oficial::Oficial(int id, string nom, string ran)
{
    noIdentificacion = id;
    nombre = nom;
    rango = ran;
}

void Oficial::display()
{
    cout << "Oficial: "<<rango<<" "<< nombre << " numero ID " << to_string(noIdentificacion) << endl;
};