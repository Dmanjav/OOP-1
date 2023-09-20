#include <string>
#ifndef CARRITO_H
#define CARRITO_H

using namespace std;

class Carrito{
    
    private:
        string articulos;        
        int limite;
        double total;
    
    public:
    
        Carrito();
        Carrito(string art, int lim, double tot);
        
        string getArticulos();
        int getLimite();
        double getTotal();
        void setArticulos(string art);
        void setLimite(int lim);
        void setTotal(double tot);
        bool codDescuento();
        void agregarArticulos();
        void comprar();
};

#endif