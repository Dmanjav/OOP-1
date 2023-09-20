//ejemplo de clase del 22 de noviembre
#include <string>
#include "Apagador.h"
#include "foco.h"
#include "lampara.h"
#include <iostream>
using namespace std;

int main(){

    cout <<"*** Pruebas de clase Apagador***" << endl;
    Apagador ap1{};
    cout << ap1.print() << endl;
    ap1.encender();
    cout << "El apagador esta: " << ap1.isEncendido() << endl;
    ap1.apagar();
    cout << ap1.print() << endl;
    
    cout << "\n*** Pruebas de la clase Foco***\n";
    Foco foco1 {};
    Foco foco2 {100, "Verde"};
    cout << foco1.print() << endl;
    cout << foco2.print() << endl;
    cout << "Luminosidad del foco 1: " << foco1.getLuminosidad() << endl;
    cout << "Color del foco 2: " << foco2.getColot() << endl;

    cout << "\n*** Pruebas de clase Lampara ***\n";
    Lampara lamp1{};
    Lampara lamp2{"Negro", 8999};
    cout << lamp1.print() << endl;
    cout << lamp2.print() << endl;
    cout << lamp1.encender() << endl;
    cout << lamp1.isEncendida() << endl;
    cout << lamp1.apagar() << endl;
    cout << lamp1.isEncendida() << endl;
    cout << lamp2.cambiarFoco(100,"Azul") << endl;
    cout << lamp2.colorFoco() << endl;
    cout << lamp2.luminosidadFoco() << endl;
    return 0;
}