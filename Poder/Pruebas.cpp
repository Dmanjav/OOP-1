#include <iostream>
#include <string>

#include "Carrito.h"
#include "Perfil.h"
#include "Monedero.h"
#include "Cliente.h"
#include "Anuncios.h"

using namespace std;

int main(){

    cout << "    *** Pruebas del proyecto ***    \n";
    cout << "\n-- Pruebas de la clase Perfil --\n";
    cout << "\n";

    Perfil perf1{};
    cout << "1. Pruebas de gets\n";
    cout << "   El nombre de usuario (por default) del perfil 1 es: " << perf1.getNombre() << endl;
    cout << "   El numero de telefono (por default) del perfil 1 es: " << perf1.getTelefono() << endl;
    cout << "   Su ciudad es: " << perf1.getCiudad() << endl;

    Perfil perf2{"Juakin","5564753578","CDMX"};
    cout << "2. Pruebas de sets\n";
    cout << "   El nombre de usuario del perfil 2 es: " << perf2.getNombre() << endl;
    cout << "   El nombre del perfil 2 cambiado con un set sera \"ICYManja12\"" << endl;
    perf2.setNombre("ICYManja12");
    cout << "   El nombre despues del cambio es: " << perf2.getNombre() << endl;
    cout << "   El telefono del perfil 1 cambiara con un set" << endl;
    perf1.setTelefono("5520983423");
    cout << "   El telefono del perfil 1 cambio a: " << perf1.getTelefono() << endl;
    cout << "   Se cambia tambien, la ciudad del perfil 2 a Monterrey" << endl;
    perf2.setCiudad("Monterrey");
    cout << "   La ciudad de perfil 2 cambiada es: " << perf2.getCiudad() << endl;
    cout << "3. Pruebas del metodo guardar con el perfil 2:\n";
    perf2.guardar();
    cout << "4. Pruebas del metodo agregarAmigos con el perfil 2:\n";
    perf2.agregarAmigos();
    cout << "5. Pruebas del metodo cum con el perfil 2:\n";
    perf2.cum();

    cout << "\n-- Pruebas de la clase Monedero --\n";
    cout << "\n";

    Monedero monedero1{};
    cout << "1. Pruebas de gets\n";
    cout << "   El metodo del monedero 1 (por default) es: " << monedero1.getMetodo() << endl;
    cout << "   La contrasenia del monedero 1 (por default) es: " << monedero1.getContra() << endl;
    cout << "   La cantidad de dinero en el monedero 1 (por default) es: " << monedero1.getCantidadDin() << endl;

    Monedero monedero2{"Credito","#G4t0loc0!", 3673.00};
    cout << "2. Pruebas de sets\n";
    cout << "   El metodo del monedero 2 es: " << monedero2.getMetodo() << endl;
    monedero1.setMetodo("Efectivo");
    cout << "   El metodo del monedero 1 ahora es: " << monedero1.getMetodo() << endl;
    monedero1.setContra("OnePunchManTop");
    cout << "   La contrasenia del monedero 1 ahora es: " << monedero1.getContra() << endl;
    monedero2.setCantidadDin(9999.00);
    cout << "   La cantidad del monedero 2 ahora es: " << monedero2.getCantidadDin() << endl;
    cout << "3. Pruebas del metodo llenar con el monedero 2:\n";
    monedero2.llenar();
    cout << "4. Pruebas del metodo compartir con el monedero 2:\n";
    monedero2.compartir();
    cout << "5. Pruebas del metodo reembolsar con el monedero 2 (La contrasenia es " << monedero2.getContra() << "):\n";
    monedero2.reembolsar();

    cout << "\n-- Pruebas de la clase Carrito --\n";
    cout << "\n";

    Carrito carrito1{};
    cout << "1. Pruebas de gets\n";
    cout << "   Los articulos en el carrito 1 (por default) son: " << carrito1.getArticulos() << endl;
    cout << "   El limite del carrito 1 (por default) es: " << carrito1.getLimite() << endl;
    cout << "   El total del carrito 1 (por default) es: " << carrito1.getTotal() << endl;

    Carrito carrito2{"Pecera, Jabalina, Lancha", 10000.00, 7785.00};
    cout << "2. Pruebas de sets\n";
    cout << "   Los articulos en el carrito 2 son: " << carrito2.getArticulos() << endl;
    carrito2.setArticulos("Hacha de mano");
    cout << "   Los articulos en el carrito 2 ahora son: " << carrito2.getArticulos() << endl;
    carrito2.setLimite(1000.00);
    cout << "   El limite de precio en el carrito 2 ahora es: " << carrito2.getLimite() << endl;
    carrito2.setTotal(8327.00);
    cout << "   El total en el carrito 2 ahora es de: " << carrito2.getTotal() << endl;
    cout << "\n";
    cout << "3. Pruebas del metodo codDescuento con el carrito 2 (el codigo es codigo):\n";
    carrito2.codDescuento();
    cout << "4. Pruebas del metodo agregarArticulos con el carrito 2:\n";
    carrito2.agregarArticulos();
    cout << "5. Pruebas del metodo vaciar con el carrito 2:\n";
    carrito2.vaciar();

    cout << "\n-- Pruebas de la clase Cliente --\n";
    cout << "\n";

    Cliente cliente1{};
    cout << "1. Pruebas de gets\n";
    cout << "   El perfil del cliente 1 (por default) es: " << cliente1.getPerfil() << endl;
    cout << "   El carrito del cliente 1 (por default) es: " << cliente1.getCarrito() << endl;
    cout << "   El monedero del cliente 1 (por default) es: " << cliente1.getMonedero() << endl;

    Cliente cliente2{{"Gildardo", "5510559898", "Nuevo Leon"},{"Papas, zanahorias", 1000.00, 300.00},{"Tarjeta", "Gildardo123", 10.00}, {"Membresia",2,0}};
    cout << "2. Pruebas de sets\n";
    cout << "   El perfil del cliente 2 es: " << cliente2.getPerfil() << endl;
    cliente2.setPerfil({"Anonimo", "Desconocido", "Desconocido"});
    cout << "   Su perfil ahora es: " << cliente2.getPerfil() << endl;
    cliente2.setCarrito({"Pollo", 10.00, 2.00});
    cout << "   Los datos de su carrito ahora son: " << cliente2.getCarrito() << endl;
    cliente2.setMonedero({"Ninguno", "AaAaA", 2.00});
    cout << "   Los datos de su monedero ahora son: " << cliente2.getMonedero() << endl;
    cout << "\n";
    cout << "3. Pruebas del metodo consultarDatos con el cliente 2:\n";
    cliente2.consultarDatos();
    cout << "4. Pruebas del metodo realizarCompra con el cliente 2:\n";
    cliente2.realizarCompra();
    cout << "5. Pruebas del metodo presentarQueja con el cliente 2:\n";
    cliente2.presentarQueja();

    cout << "\n-- Pruebas de la clase Cliente --\n";
    cout << "\n";

    Anuncio anuncio1{};
    cout << "1. Pruebas de gets\n";
    cout << "   La preferencia para los anuncios 1 (por default) es:" << anuncio1.getPrefs() << endl;
    cout << "   La cantidad de anuncios 1 (por default) es: " << anuncio1.getCant() << endl;
    cout << "   ¿Se van a mostrar anuncios 1 (por default)? " << anuncio1.getSioNo() << endl;

    Anuncio anuncio2{"Alimentos", 2, 0};
    cout << "2. Pruebas de sets\n";
    cout << "  La preferencia para los anuncios 2 es: " << anuncio2.getPrefs() << endl;
    anuncio2.setPrefs("Hogar");
    cout << "   La preferencia ahora para los anuncios 2 es: " << anuncio2.getPrefs() << endl;
    cout << "   La cantidad de anuncios 2 es: " << anuncio2.getCant() << endl;
    anuncio2.setCant(5);
    cout << "   La cantidad ahora para los anuncios 2 es: " << anuncio2.getCant() << endl;
    cout << "   ¿Se van a mostrar anuncios 2? " << anuncio2.getSioNo() << endl;
    anuncio2.setSioNo(1);
    cout << "   ¿Ahora se mostraran anuncios 2? " << anuncio2.getSioNo() << endl;


    return 0;
}
