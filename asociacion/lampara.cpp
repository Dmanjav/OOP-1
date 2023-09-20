//Codigo lampara

#include <iostream>
#include "Lampara.h"
#include "apagador.h"

using namespace std;
#include<string>

Lampara::Lampara() : color{"Naranja"},costo{200.00},foco{60,"Verde"},apagador{} {}
Lampara::Lampara(string c, float cost) : color{c}, costo{cost},foco{60,"Verde"},apagador{} {}

string Lampara::getColor(){return color;}
float Lampara::getCosto(){return costo;}
void Lampara::setCosto(float c){costo = c;}

string Lampara::encender(){
    apagador.encender();
    return "Lampara Encendida " + to_string(apagador.isEncendido());
    }

string Lampara::apagar(){
    apagador.apagar();
    return "Lampara Apagada " + to_string(apagador.isEncendido());
    }

bool Lampara::isEncendida(){return apagador.isEncendido();}

string Lampara::cambiarFoco(int lum, string col){
    Foco nuevoFoco{lum,col};
    foco = nuevoFoco;
    return "Foco cambiado a " + foco.print();
}

string Lampara::colorFoco(){return foco.getColot();}
int Lampara::luminosidadFoco(){return foco.getLuminosidad();}
string Lampara::print(){
    return "Lampara (" + color + "," + to_string(costo) + "," + foco.print() + "," + apagador.print() + ")";
}