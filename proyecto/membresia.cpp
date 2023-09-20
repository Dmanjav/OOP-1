#include <iostream>
#include <string>
#include "membresia.h"

using namespace std;

Membresia::Membresia():miembro{"Regular"},envios{"Regulares"},limnuevo{10000},asistente{"Nulo"}{}
Membresia::Membresia(string miem, string ship, int lnv, string asist):miembro{miem},envios{ship},limnuevo{lnv},asistente{asist}{}

string Membresia::getMiembro(){return miembro;}
string Membresia::getEnvios(){return envios;}
int Membresia::getLimNuevo(){return limnuevo;}
string Membresia::getAsistente(){return asistente;}

void Membresia::setMiembro(string miem){miembro = miem;}
void Membresia::setEnvios(string ship){envios = ship;}
void Membresia::setLimNuevo(int lnv){limnuevo = lnv;}
void Membresia::setAsistente(string asist){asistente = asist;}

void Membresia::notifs(){
    cout << "Usted ahora recibirá las notificaciones de productos especiales.";
}
void Membresia::asistenteopcional(){
    cout << "Si usted desea, se le puede asignar un asistente personal.";
    cout << "No es necesario, pero al cliente lo mejor.";
}
void Membresia::app(){
    cout << "Usted ahora puede descargar nuestra app al escanear el código qr.";
    cout << "\n";
}