//Diego Manjarrez Viveros A01753486
#ifndef TECLADO_H
#define TECLADO_H
#include "led.h"

#include <string>

using namespace std;

class Teclado{

    private:
        Led indicador;  
        int numTeclas;

    public:
        Teclado();
        Teclado(int num);
        string colorLed();
        bool prendidoLed();
        void cambiaColorLed(string col);
        int getNumTeclas();
        void setNumTeclas(int num);
        string print();
};

#endif