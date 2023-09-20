#include <string>
#ifndef CARRITO_H
#define CARRITO_H

using namespace std;

class Carrito{

    private:
        string articulos;
        double limite;
        double total;

    public:

        Carrito();
        Carrito(string art, double lim, double tot);

        string getArticulos();
        int getLimite();
        double getTotal();
        void setArticulos(string art);
        void setLimite(double lim);
        void setTotal(double tot);
        void codDescuento();
        void agregarArticulos();
        void vaciar();
};

#endif
