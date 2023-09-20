//ejemplo de arreglos
#include "foco.h"
#include <vector>
#include <iostream>

using namespace std;

void altaFoco(vector<Foco>& caja){
    int lum;
    string color;
    cout << "Dime el color del foco: "; cin >> color;
    cout << "Dime la luminosidad del foco: "; cin >> lum;
    caja.push_back(Foco{lum,color});
}

void consultaFocos(vector<Foco>& caja){
    for (int i=0; i < caja.size(); i++)
        cout << caja[i].print() << endl;
}

int main(int argc, char const *argv[])
{
    vector<Foco> cajaFocos;
    cajaFocos.reserve(7);
    int opc{0};

    while (opc != 3){
        cout << "Dime tu opcion: "; cin >> opc;
        switch (opc)
        {
        case 1:
            altaFoco(cajaFocos);
            break;
        case 2: 
            consultaFocos(cajaFocos);
            break;
        case 3:
            cout << "Gracias por usar programa focos." << endl;
            break;
        default:
            cout << "Error, valores validos del 1 al 3." << endl;
            break;
        }
    }

    return 0;
}
