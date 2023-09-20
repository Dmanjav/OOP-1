#include <string>
#include <iostream>
#include "carrito.h"

using namespace std;

Carrito::Carrito():articulos{"Motosierra"},limite{10000},total{2000.00}{}
Carrito::Carrito(string art, int lim, double tot):articulos{art},limite{lim},total{tot}{}

string Carrito::getArticulos(){return articulos;}
int Carrito::getLimite(){return limite;}
double Carrito::getTotal(){return total;}

void Carrito::setArticulos(string art){articulos = articulos + ", " + art;}
void Carrito::setLimite(int lim){limite = lim;}
void Carrito::setTotal(double tot){total = tot;}

bool Carrito::codDescuento(){
    cout << "Ingrese su código de descuento: "; cin;
}

void Carrito::agregarArticulos(){
    cout << "Ya no puede agregar más artículos.";
    cout << "Por favor, vacie su carrito y vuelva a intentar.";
}

void Carrito::comprar(){
    cout << "Gracias por su compra, por favor regrese a comprar con nosotros.\n";
}