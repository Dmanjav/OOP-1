#include "perfil.h"
#include <string>
#include <iostream>

using namespace std;

Perfil::Perfil(): nombre{"Anonimo"},telefono{"Desconocido"},ciudad{"Desconocida"}{}
Perfil::Perfil(string nombre,string telefono, string citx):nombre{nombre},telefono{telefono},ciudad{citx}{}

string Perfil::getNombre(){return nombre;}
string Perfil::getTelefono(){return telefono;}
string Perfil::getCiudad(){return ciudad;}

void Perfil::setNombre(string nomb){nombre = nomb;}
void Perfil::setTelefono(string tel){telefono = tel;}
void Perfil::setCiudad(string city){ciudad = city;}

void Perfil::guardar(){
    cout << "\n***La informacion del usuario ha sido guardada.***\n";
}

void Perfil::agregarAmigos(){
    string amigo;
    cout << "Por favor, ingrese el nombre de usuario :"; cin >> amigo;
    cout << "El usuario " + amigo + " no fue encontrado.";
    cout << "Por favor intente más tarde.";
}

void Perfil::cum(){
    string cumple;
    cout << "No se tienen datos sobre el cumpleaños.";
    cout << "Por favor ingrese su cumpleanios: "; cin >> cumple;
    cout << "Se han guardado sus datos.";
}
