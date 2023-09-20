#include <iostream>
#include <string>

#include "carrito.h"
#include "perfil.h"
#include "monedero.h"
#include "anuncios.h"
#include "membresia.h"
#include "cliente.h"

using namespace std;

int main(){

    cout << "\n--- Pruebas del proyecto ---" << endl;
    cout << "-- Pruebas de la clase Perfil --" << endl;
    cout << "\n";

    Perfil perf1{};

    cout << "El nombre de usuario del perfil 1 es: " << perf1.getNombre() << endl;
    cout << "El numero de telefono del perfil 1 es: " << perf1.getTelefono() << endl;
    cout << "Tu ciudad es: " << perf1.getCiudad() << endl;

    Perfil perf2{"Juakin","5564753578","CDMX"};

    cout << "\nEl nombre de usuario del perfil 2 es: " << perf2.getNombre() << endl;
    cout << "El nombre del perfil 2 cambiado con un set sera \"ICYManja12\"" << endl;
    perf2.setNombre("ICYManja12");
    cout << "El nombre despues del cambio es: " << perf2.getNombre() << endl;
    cout << "\nEl telefono del perfil 1 cambiara con un set: " << endl;
    perf1.setTelefono("5520983423");
    cout << "El telefono del perfil 1 cambio a: " << perf1.getTelefono() << endl;
    cout << "\nSe cambia tambien, la ciudad del perfil 2 a Mty." << endl;
    perf2.setCiudad("Monterrey");
    cout << "La ciudad de perfil 2 cambiada es: " << perf2.getCiudad() << endl;
    cout << "\n";
    cout << "-- Pruebas de la clase Monedero --" << endl;
    cout << "\n";

    Monedero monedero1{};

    cout << "El metodo del monedero 1 es: " << monedero1.getMetodo() << endl;
    cout << "La contrasenia del monedero 1 es: " << monedero1.getContra() << endl;
    cout << "La cantidad de dinero en el monedero 1 es: " << monedero1.getCantidadDin() << endl;
    cout << "\n";
    Monedero monedero2{"Credito","#G4t0loc0!", 3673};

    cout << "El metodo del monedero 2 es: " << monedero2.getMetodo() << endl;
    cout << "La contrasenia del monedero 2 es: " << monedero2.getContra() << endl;
    cout << "La cantidad de dinero en el monedero 2 es: " << monedero2.getCantidadDin() << endl;
    cout << "\n";
    monedero1.setMetodo("Efectivo");
    cout << "El metodo del monedero 1 ahora es: " << monedero1.getMetodo() << endl;
    monedero1.setContra("OnePunchManTop");
    cout << "La contrasenia del monedero 1 ahora es: " << monedero1.getContra() << endl;
    monedero2.setCantidadDin(9999);
    cout << "La cantidad del monedero 2 ahora es: " << monedero2.getCantidadDin() << endl;
    cout << "\n";

    cout << "-- Pruebas de la clase Carrito --" << endl;
    cout << "\n";

    Carrito carrito1{};
    Carrito carrito2{"Pecera, Jabalina, Lancha", 10000, 7785};

    cout << "Los articulos en el carrito 2 son: " << carrito2.getArticulos() << endl;
    cout << "El limite de precio en el carrito 1 es: " << carrito1.getLimite() << endl;
    cout << "El total en el carrito 2 es de: " << carrito2.getTotal() << endl;
    cout << "\n";
    carrito2.setArticulos("Hacha de mano");
    cout << "Los articulos en el carrito 2 ahora son: " << carrito2.getArticulos() << endl;
    carrito1.setLimite(1000);
    cout << "El limite de precio en el carrito 1 ahora es: " << carrito1.getLimite() << endl;
    carrito2.setTotal(8327);
    cout << "El total en el carrito 2 es de: " << carrito2.getTotal() << endl;
    cout << "\n";

    cout << "-- Pruebas de la clase Membresia --" << endl;
    cout << "\n";

    Membresia membresia1{};
    Membresia membresia2{"Prime","Rapidos", 20000, "Jorge de Acevedo"};

    cout << "El tipo de miembro de la membresia 1 es: " << membresia1.getMiembro() << endl;
    cout << "El tipo de envios que tiene la membresia 2 es: " << membresia2.getEnvios() << endl;
    cout << "El limite nuevo de la membresia 2 es: " << membresia2.getLimNuevo() << endl;
    cout << "El asistente asignado a la membresia 1 es: " << membresia1.getAsistente() << endl;
    cout << "\n";
    membresia1.setMiembro("Prime");
    cout << "Ahora el tipo de miembro de la membresia 1 es: " << membresia1.getMiembro() << endl;
    membresia2.setEnvios("Regulares");
    cout << "El tipo de envios que tiene la membresia 2 es: " << membresia2.getEnvios() << endl;
    membresia2.setLimNuevo(40000);
    cout << "El limite nuevo de la membresia 2 es: " << membresia2.getLimNuevo() << endl;
    membresia1.setAsistente("Peter Parker");
    cout << "El asistente asignado a la membresia 1 es: " << membresia1.getAsistente() << endl;
    cout << "\n";

    cout << "-- Pruebas de la clase Anuncios --" << endl;
    cout << "\n";

    Anuncio anuncio1{};
    Anuncio anuncio2{"Electrodomesticos", 2, 1};

    cout << "Las preferencias del anuncio 1 son: " << anuncio1.getPrefs() << endl;
    cout << "La cantidad de anuncios para el anuncio 2 son: " << anuncio2.getCant() << endl;
    cout << "Los anuncios del anuncio 1 aparecen: " << anuncio1.getSioNo() << endl;
    cout << "\n";
    anuncio1.setPrefs("Entretenimiento");
    cout << "Las preferencias nuevas del anuncio 1 son: " << anuncio1.getPrefs() << endl;
    anuncio2.setCant(5);
    cout << "La cantidad actualizada de anuncios para el anuncio 2 son: " << anuncio2.getCant() << endl;
    anuncio1.setSioNo(0);
    cout << "Los anuncios del anuncio 1 siguen apareciendo: " << anuncio1.getSioNo() << endl;
    cout << "\n";

    cout << "-- Pruebas de la clase Cliente --" << endl;
    cout << "\n";
    Cliente cliente1{};
    cout << "Los datos del cliente 1 son: " << endl;
    cout << cliente1.getPerfil() << endl;
    cout << "El carrito del cliente 1 es: " << endl;
    cout << cliente1.getCarrito() << endl;
    cout << "El monedero del cliente 1 es: " << endl;
    cout << cliente1.getMonedero() << endl;
    cout << "La membresia del cliente 1 es: " << endl;
    cout << cliente1.getMembresia() << endl;
    cout << "Los anuncios para el cliente 1 son: " << endl;
    cout << cliente1.getAnuncio() << endl;
    return 0;
}