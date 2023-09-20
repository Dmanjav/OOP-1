#include <string>
#include "Carrito.h"
#include "Perfil.h"
#include "Monedero.h"
#include "Anuncios.h"

#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class Cliente{

    private:
        Perfil perfil;
        Carrito carrito;
        Monedero monedero;
        Anuncio anuncio;

    public:

        Cliente();
        Cliente(Perfil perf, Carrito car, Monedero mon,/*,Membresia mem*/Anuncio anun);

        string getCarrito();
        string getMonedero();
        string getPerfil();
        string getAnuncio();

        void setCarrito(Carrito costo);
        void setMonedero(Monedero money);
        void setPerfil(Perfil perfi);
        void setAnuncio(Anuncio anu);

        void consultarDatos();
        void realizarCompra();
        void presentarQueja();

};

#endif
