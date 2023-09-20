#ifndef LAMPARA_H
#define LAMPARA_H

#include "foco.h"
#include "apagador.h"
#include <string>
using namespace std;

class Lampara{
    private:
        string color;
        float costo;
        Foco foco;
        Apagador apagador;
    public:
        Lampara();
        Lampara(string c, float cost);
        string getColor();
        float getCosto();
        void setCosto(float c);
        string encender();
        string apagar();
        bool isEncendida();
        string cambiarFoco(int lum, string col);
        string colorFoco();
        int luminosidadFoco();
        string print();
};
#endif