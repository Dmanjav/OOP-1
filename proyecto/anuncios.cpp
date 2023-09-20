#include "anuncios.h"
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
    cout << "*** Recuerda que puedes contratar Spotify Premium por tres meses, por tan solo $129. ***" << endl; 
    cout << "\n";
}

void Anuncio::anuncioSony(){
    cout << "*** El nuevo Sony XPeria tiene una nueva camra triple de 50 mp cada una. ***" << endl;
    cout << "***Consulta disponibilidad en tiendas.***";
    cout << "\n";
}

void Anuncio::anuncioMembresia(){
    cout << "*** La mmembresia Prime te brinda muchos beneficios para ti: ***" << endl;
    cout << "1. SIN anuncios" << endl;
    cout << "2. Envios Rapdios" << endl;
    cout << "3. Un asistente PERSONAL." << endl;
    cout << "4. Un limite mayor para tu monedero. " << endl;
    cout << "*** Tan solo por $99.00 mensuales!" << endl;
    cout << "\n";
}

void Anuncio::anuncioDominos(){
    cout << "*** Disfruta de una papas locas en la compra de dos pizzas familiares de pepperoni. ***" << endl;
    cout << "***Consulta disponibilidad en tiendas.***";
    cout << "\n";
}

void Anuncio::anuncioLG(){
    cout << "*** El nuevo refire LG1500X, tiene menor consumo de energia y una mayor refrigeracion. ***" << endl;
    cout << "Con un consumo mas responsable, ayudemos al ambiente." << endl;
    cout << "LG, siempre verde" << endl;
}