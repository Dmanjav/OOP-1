#include "Perfil.h"
#include <string>
#include <iostream>

using namespace std;

Perfil::Perfil(): nombre{"Anonimo"},telefono{"Desconocido"},ciudad{"Desconocida"}{}
Perfil::Perfil(string nombr,string telefon, string citx):nombre{nombr},telefono{telefon},ciudad{citx}{}

string Perfil::getNombre(){return nombre;}
string Perfil::getTelefono(){return telefono;}
string Perfil::getCiudad(){return ciudad;}

void Perfil::setNombre(string nomb){nombre = nomb;}
void Perfil::setTelefono(string tel){telefono = tel;}
void Perfil::setCiudad(string city){ciudad = city;}

void Perfil::guardar(){
    char resp; string novonom, novotel, novocit;
    cout << "\n      - ¿Desea cambiar su nombre, telefono o ciudad? (s/n) - "; cin >> resp;
    if (resp=='s') {
      cout << "   Ingresa el nuevo nombre (si es el mismo vuelvalo a poner): "; cin >> novonom;
      cout << "   Ingresa el nuevo telefono (si es el mismo vuelvalo a poner): "; cin >> novotel;
      cout << "   Ingresa la nueva ciudad (si es la misma vuelvalo a poner): "; cin >> novocit;
      nombre = novonom; telefono = novotel; ciudad = novocit;
    }
}

void Perfil::agregarAmigos(){
    string amigo;
    cout << "   Por favor, ingrese el nombre de usuario que quiere que sea su amigo: "; cin >> amigo;
    cout << "   El usuario " + amigo + " no fue encontrado.\n";
    cout << "   Por favor intente más tarde.\n";
}

void Perfil::cum(){
    string cump;
    cout << "   No se tienen datos sobre el cumpleaños.\n";
    cout << "   Por favor ingrese su cumpleanios: "; cin >> cump;
    cout << "   Se han guardado sus datos.\n\n";
}
