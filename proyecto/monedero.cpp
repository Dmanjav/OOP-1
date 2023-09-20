#include <iostream>
#include <string>
#include "monedero.h"

using namespace std;

Monedero::Monedero():metodo{"Ninguno"}, contra{"Lfl$m07r1"}, cantidadDin{0.00}{}
Monedero::Monedero(string met, string contras, double cant):metodo{met},contra{contras},cantidadDin{cant}{}

string Monedero::getMetodo(){return metodo;}
string Monedero::getContra(){return contra;}
double Monedero::getCantidadDin(){return cantidadDin;}

void Monedero::setMetodo(string met){metodo = met;}
void Monedero::setContra(string contras){contra = contras;}
void Monedero::setCantidadDin(double cant){cantidadDin = cant;}

void Monedero::llenar(){
    cout << "Actualmente, su monedero se encuentra en $0.0";
    cout << "Por favor, ingrese la cantidad para llenar su monedero :";
}

void Monedero::compartir(){
    string comp;
    cout << "Ingrese el nombre de usuario con el que desea compartir el monedero: "; cin >> comp;
    cout << "El monedero ha sido compartido con " + comp;
}

void Monedero::reembolsar(){
    cout << "Se vaciara todo el dinero de su monedero para su devolucion.\n"; 
    cout << ".\n"; 
    cout << "..\n"; 
    cout << "...\n"; 
    cout << "Su monedero se ha vaciado";
}