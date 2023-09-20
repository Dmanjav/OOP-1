#include <string>
#include <iostream>
#include "Carrito.h"
using namespace std;

Carrito::Carrito():articulos{"Pan"},limite{1000.00},total{10.00}{}
Carrito::Carrito(string art, double lim, double tot):articulos{art},limite{lim},total{tot}{}
string Carrito::getArticulos(){return articulos;}
int Carrito::getLimite(){return limite;}
double Carrito::getTotal(){return total;}
void Carrito::setArticulos(string art){articulos = articulos + ", " + art;}
void Carrito::setLimite(double lim){limite = lim;}
void Carrito::setTotal(double tot){total = tot;}

void Carrito::codDescuento(){
    string codigo, recibido;
    codigo = "codigo";
    cout << "\n   Ingrese su código de descuento: "; cin >> recibido;
    if (recibido == codigo) {
      cout << "   Código valido, se ha hecho un descuento del 10%\n";
      total = total - total*0.1;
    } else {
      cout << "   Código no valido, no hay descuento\n";
    }
}
void Carrito::agregarArticulos(){
    char n = 's'; string nart;
    if (total+10 >= limite) {
      cout << "\n   Ya no puede agregar más artículos.\n";
      cout << "   Por favor, vacie su carrito y vuelva a intentar.\n";
    } else {
      while (n == 's') {
        cout << "   Tiene un espacio disponible de " << limite - total << endl;
        cout << "\n   Ingrese el artículo: "; cin >> nart;
        articulos = articulos + ", " + nart; total = total + 20;
        if (total+10>=limite) {cout<<"Limite alcanzado.\n";break;}
        cout << "   Articulo " + nart + " agregado al carrito, ¿desea agregar otro? (s/n) "; cin >> n;
      }
    }
}
void Carrito::vaciar(){
    char n;
    cout << "   Su carrito cuenta con los siguientes articulos:.\n";
    cout << "   " + articulos << endl;
    cout << "\n   ¿Segur@ que lo desea vaciar? (s/n) "; cin >> n;
    if (n == 's') {
      articulos = "";
      cout << "   Su carrito ha sido vaciado\n";
    } else {
      cout << "   Su carrito no ha sido vaciado\n";
    }
}
