/*
Author: Jose Angel Garcia Gomez
Description: Program that contains the main function that will be used to test the program
*/

#include "oficial.h"
#include "Destructor.h"
#include "Submarino.h"
#include "Transportador.h"
#include "navio.h"
#include "flota.h"
#include "oficial.cpp"
#include "Destructor.cpp"
#include "Submarino.cpp"
#include "Transportador.cpp"
#include "navio.cpp"
#include "flota.cpp"
#include <iostream>
#include <vector>
#include <string>

int main(void)
{

    Destructor des1(5, "LIAONING ", "#9087", 200);
    Destructor des2(10, "CLEMENCEAU", "#1324", 150);
    Submarino sub1(15, "Clase Typhoon", "#5687",30);
    Submarino sub2(10, "Clase Delta", "#8654",40);
    Transportador tra1(100, "Buque de Carga General", "#7568", 20);
    Transportador tra2(50, "Buque Ro Ro", "#1745", 50);

    Oficial of1( 0001, "Jose", "Capitan");
    Flota f1(1505, of1);


    Navio* ap1=NULL;
    ap1 = &des1;
    f1.agregarNavio(ap1);
    ap1 = &des2;
    f1.agregarNavio(ap1);
    ap1 = &sub1;
    f1.agregarNavio(ap1);
    ap1 = &sub2;
    f1.agregarNavio(ap1);
    ap1 = &tra1;
    f1.agregarNavio(ap1);
    ap1 = &tra2;
    f1.agregarNavio(ap1);

    f1.displayFlota();
    f1.desplegar();
    cout << "El poder total de la flota es de: "<< to_string(f1.getTotalPoderFuego())<< endl;
}