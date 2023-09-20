#include <iostream>
#include <string>
#include "Monedero.h"

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
    double ingresodin;
    cout << "   Actualmente, su monedero se encuentra en " << cantidadDin << "$\n";
    cout << "   Por favor, ingrese la cantidad para llenar su monedero: "; cin >> ingresodin;
    cantidadDin = cantidadDin + ingresodin;
}

void Monedero::compartir(){
    string comp;
    cout << "   Ingrese el nombre de usuario con el que desea compartir el monedero: "; cin >> comp;
    cout << "   El monedero ha sido compartido con " + comp << endl;
}

void Monedero::reembolsar(){
    string cont;
    cout << "   Ingrese contrasenia: "; cin >> cont;
    if (cont == contra) {
      cout << "   Se vaciara todo el dinero de su monedero para su devolucion.\n";
      cantidadDin = 0.00;
      cout << "   .\n";
      cout << "   ..\n";
      cout << "   ...\n";
      cout << "   Su monedero se ha vaciado\n";
    } else {
      cout << "   Contrasenia incorrecta\n";
    }
}
