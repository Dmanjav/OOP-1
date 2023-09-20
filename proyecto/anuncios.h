#ifndef ANUNCIOS_H
#define ANUNCIOS_H
#include <iostream>
#include <string>

using namespace std;

class Anuncio{
    
    private:
        string preferencias;
        int cantidad;
        bool siono;

    public:
        Anuncio();
        Anuncio(string prefs, int cants, bool sn);

        string getPrefs();
        int getCant();
        bool getSioNo();

        void setPrefs(string prefs);
        void setCant(int cant);
        void setSioNo(bool sn);

        void anuncioSpotify();
        void anuncioSony();
        void anuncioMembresia();
        void anuncioDominos();
        void anuncioLG();
};
#endif