//Diego Manjarrez Viveros A01753486
#include <string>
#include <iostream>
#include "led.h"

using namespace std;

Led::Led(): color{"Verde"}, encendido{0}{}
Led::Led(string col,bool enc): color{col},encendido{enc}{}

string Led::getColor(){return color;}

void Led::setColor(string col){color = col;}
void Led::setEncendido(bool enc){encendido = enc;}

bool Led::isEncendido(){return encendido;}

string Led::apagar(){
    return to_string(encendido);
}

string Led::encender(){
    return to_string(encendido);
}

string Led::print(){
    return "Led (" + color + "," + to_string(encendido) + ")";
}