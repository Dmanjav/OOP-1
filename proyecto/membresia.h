#ifndef MEMBRESIA_H
#define MEMBRESIA_H
#include <iostream>
#include <string>

using namespace std;

class Membresia{

    private:
        string miembro;
        string envios;
        int limnuevo;
        string asistente;

    public:
        Membresia();
        Membresia(string miem, string ship, int lnv, string asist);

        string getMiembro();
        string getEnvios();
        int getLimNuevo();
        string getAsistente();

        void setMiembro(string miem);
        void setEnvios(string ship);
        void setLimNuevo(int lnv);
        void setAsistente(string asist);

        void notifs();
        void asistenteopcional();
        void app();
};

#endif