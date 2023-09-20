#include <string>
#ifndef MONEDERO_H
#define MONEDERO_H

using namespace std;

class Monedero{

    private:
        string metodo;
        string contra;
        double cantidadDin;

    public:
        Monedero();
        Monedero(string met, string contras, double cant);

        string getMetodo();
        string getContra();
        double getCantidadDin();
        void setMetodo(string met);
        void setContra(string contras);
        void setCantidadDin(double cant);
        void llenar();
        void compartir();
        void reembolsar();
};

#endif