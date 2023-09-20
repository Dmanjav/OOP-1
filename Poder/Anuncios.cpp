#include "Anuncios.h"
#include <iostream>
#include <string>

using namespace std;

Anuncio::Anuncio():preferencias{"Tecnologia"},cantidad{3},siono{1}{}
Anuncio::Anuncio(string prefs, int cants, bool sn): preferencias{prefs},cantidad{cants},siono{sn}{}

string Anuncio::getPrefs(){return preferencias;}
int Anuncio::getCant(){return cantidad;}
bool Anuncio::getSioNo(){return siono;}

void Anuncio::setPrefs(string prefs){preferencias = prefs;}
void Anuncio::setCant(int cant){cantidad = cant;}
void Anuncio::setSioNo(bool sn){siono = sn;}

void Anuncio::anuncioSpotify(){
    cout << "\n\n*** Recuerda que puedes contratar Spotify Premium por tres meses, por tan solo $129. ***\n\n\n";
}

void Anuncio::anuncioSony(){
    cout << "***\n\nEl nuevo Sony XPeria tiene una nueva camra triple de 50 mp cada una.***\n";
    cout << "***Consulta disponibilidad en tiendas.***\n\n\n";
}

void Anuncio::anuncioMembresia(){
    cout << "\n\n*** La mmembresia Prime te brinda muchos beneficios para ti: ***\n";
    cout << "1. SIN anuncios\n";
    cout << "2. Envios Rapdios\n";
    cout << "3. Un asistente PERSONAL.\n";
    cout << "4. Un limite mayor para tu monedero.\n";
    cout << "*** Tan solo por $99.00 mensuales!\n\n\n";
}

void Anuncio::anuncioDominos(){
    cout << "\n\n***Disfruta de una papas locas en la compra de dos pizzas familiares de pepperoni. ***\n";
    cout << "***Consulta disponibilidad en tiendas.***\n\n\n";
}

void Anuncio::anuncioLG(){
    cout << "\n\n*** El nuevo refire LG1500X, tiene menor consumo de energia y una mayor refrigeracion. ***\n";
    cout << "Con un consumo mas responsable, ayudemos al ambiente.\n";
    cout << "LG, siempre verde\n\n\n";
}
