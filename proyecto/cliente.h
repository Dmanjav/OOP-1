#include <string>
#include "carrito.h"
#include "perfil.h"
#include "membresia.h"
#include "monedero.h"
#include "anuncios.h"

#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class Cliente{

    private:
        Perfil perfil;
        Carrito carrito;
        Monedero monedero;
        Membresia membresia;
        Anuncio anuncio;

    public:
    
        Cliente();
        Cliente(Perfil perf, Carrito car, Monedero mon,Membresia mem,Anuncio anun);

        string getCarrito();
        string getMonedero();
        string getPerfil();
        string getMembresia();
        string getAnuncio();

        void setCarrito(Carrito costo);
        void setMonedero(Monedero money);
        void setPerfil(Perfil perfi);
        void setMembresia(Membresia memb);
        void setAnuncio(Anuncio anunc);

        void consultarDatos();
        void realizarCompra();
        void presentarQueja();

};

#endif