//Diego Manjarrez Viveros A01753486
#include "teclado.h"
#include "led.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    cout << "***Pruebas de clase Led***";
    cout << "\n";
    Led led1{};
    led1.print();
    Led led2{"Rojo", 1};
    led2.print();
    cout << "Led 1 es de color: " << led1.getColor() << endl;
    cout << "Led 2 está " << led2.isEncendido() << endl;
    cout << led1.print();
    cout << led2.print();
    cout << "\n";

    cout << "--- Pruebas de la clase Teclado --- ";
    Teclado teclado1{};
    Teclado teclado2{};
    teclado2.setNumTeclas(44);
    cout << teclado2.prendidoLed();
    cout << "\n";
    cout << teclado1.print();
    cout << "\n";
    cout << teclado2.print();

    return 0;
}
