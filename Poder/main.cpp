#include "Cliente.h"
#include "Perfil.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
  Cliente cliente{};
  char opcion;
  cout << "----------------------------\n";
  cout << "-- Bienvenid@ a la tienda --\n";
  cout << "----------------------------\n";
  while (true) {
    cout << "\n\n   Seleccione alguna de las siguientes opciones:\n";
    cout << "\n 1) Consultar datos de perfil\n 2) Realizar una compra\n 3) Presentar una queja \n 4) Salir\n";
    cout << "\n     - Respuesta: "; cin >> opcion;
    if (opcion == '1') {
      cout<<"\n";
      cliente.consultarDatos();
    } else if (opcion == '2') {
      cout<<"\n";
      cliente.realizarCompra();
    } else if (opcion == '3') {
      cout<<"\n";
      cliente.presentarQueja();
    } else {
      cout<<"\nGracias por su preferencia.\nVuelva pronto.\n\n";
      break;
    }
  }
  return 0;
}
