#include <iostream>
#include <string>
#include "cliente.h"
#include "carrito.h"
#include "perfil.h"
#include "monedero.h"
#include "membresia.h"
#include "anuncios.h"

using namespace std;

Cliente::Cliente():perfil{"Anonimo", "Desconocido", "Desconocido"},carrito{"Vacio",10000,0.00},monedero{"Ninguno", "Lfl$m07r1", 0.00},membresia{"Regular","Regulares",10000, "Nulo"},anuncio{"Hogar",1,0}{}
Cliente::Cliente(Perfil perf, Carrito car, Monedero mon, Membresia memb, Anuncio anunc):perfil{perf},carrito{car}, monedero{mon},membresia{memb},anuncio{anunc}{}

string Cliente::getPerfil(){return perfil.getNombre() + ", " + perfil.getTelefono() + ", " + perfil.getCiudad();}
string Cliente::getCarrito(){return carrito.getArticulos() + ", " + to_string(carrito.getLimite()) + ", " + to_string(carrito.getTotal());}
string Cliente::getMonedero(){return monedero.getMetodo() + ", " + monedero.getContra() + ", " + to_string(monedero.getCantidadDin());}
string Cliente::getMembresia(){return membresia.getMiembro() + ", " + membresia.getEnvios() + ", " + to_string(membresia.getLimNuevo()) + ", " + membresia.getAsistente();}
string Cliente::getAnuncio(){return anuncio.getPrefs() + ", " + to_string(anuncio.getCant()) + ", " + to_string(anuncio.getSioNo());}

void Cliente::setPerfil(Perfil perf){perfil = perf;}
void Cliente::setMonedero(Monedero money){monedero = money;}
void Cliente::setCarrito(Carrito car){carrito = car;}
void Cliente::setMembresia(Membresia memb){membresia = memb;}
void Cliente::setAnuncio(Anuncio anunc){anuncio = anunc;}

void Cliente::consultarDatos(){
    cout << "Para consultar sus datos por favor ingrese opción 1: "; cin;
    cout << "\n";
    cout << "Procesando sus datos...Espere por favor.\n";
    cout << "Su información es : ";
}
void Cliente::realizarCompra(){
    cout << "Para realizar su compra por favor ingrese opción 2: "; cin;
    cout << "\n";
    cout << "Procesando su compra...Espere por favor.\n";
    cout << "Compra realizada";
}
void Cliente::presentarQueja(){
    cout << "Para ingresar una queja presione 3: "; cin;
    cout << "\n";
    cin;
    cout << "Su queja ha sido regristrada, gracias por su evaluacion.";
}