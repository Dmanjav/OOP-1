//Diego Manjarrez Viveros A01753486
#include <string>
#include <iostream>
#include "led.h"
#include "teclado.h"

using namespace std;

Teclado::Teclado():indicador {"Morado", 0},numTeclas{77}{}
Teclado::Teclado(int num):indicador {"Morado", 0},numTeclas{num}{}

string Teclado::colorLed(){
    return "Color del indicador del teclado 1: " + indicador.getColor();
}

bool Teclado::prendidoLed(){
    return indicador.isEncendido();
}

void Teclado::cambiaColorLed(string col){
    indicador.setColor(col);
}

int Teclado::getNumTeclas(){return numTeclas;}

void Teclado::setNumTeclas(int num){numTeclas = num;}

string Teclado::print(){
    return "Teclado (Led " + indicador.print() + "," + to_string(numTeclas) + ")";
}