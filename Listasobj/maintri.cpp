#include <iostream>
#include <string>

#include "Triangle.h"
#include "point.h"

int main(){
    
    double x1,y1,x2,y2,x3,y3;

    Triangle triangle1{};

    cout << "***Prueba del triangulo 1: ***" << endl;
    cout << "\n";
    cout << "El perimetro del triangulo 1: " << triangle1.perimeter() << endl;
    cout << "El area del triangulo 1 es: " << triangle1.area() << endl;

    cout << "\nDame la primer coordenada en x1: "; cin >> x1;
    cout << "Dame la primer coordenada en y1: "; cin >> y1;
    cout << "\nDame la primer coordenada en x2: "; cin >> x2;
    cout << "Dame la primer coordenada en y2: "; cin >> y2;
    cout << "\nDame la primer coordenada en x3: "; cin >> x3;
    cout << "Dame la primer coordenada en y3: "; cin >> y3;
    cout << "\n";

    Triangle triangle2{{x1,y1},{x2,y2},{x3,y3}};

    cout << "***Prueba del triangulo 2***" << endl;
    cout << "\n";
    cout << "El perimetro del triangulo 2: " << triangle2.perimeter() << endl;
    cout << "El area del triangulo 2 es: " << triangle2.area() << endl;
    cout << "\n";
    
    return 0;
}