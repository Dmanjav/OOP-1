#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;

int operaNumeros() {
  int num1 = 0, num2 = 0;
  char resp;
  cout << "Ingresa el primer número: "; cin >> num1;
  cout << "Ingresa el segundo número: "; cin >> num2;
  cout << "Seleccionar la opción que se desee tomar\n";
  cout << "<S> Mostrar una suma de los dos números\n";
  cout << "<R> Mostrar una resta de los dos números (el primero menos el segundo)\n";
  cout << "<M> Mostrar una multiplicación de los dos números\n";
  cout << "Opción: "; cin >> resp;
  switch (resp) {
    case 'S':
      cout << "Suma de los números: " << num1 + num2 << endl;
      break;
    case 'R':
      cout << "Resta de los números: " << num1 - num2 << endl;
      break;
    case 'M':
      cout << "Multiplicación de los números: " << num1 * num2 << endl;
      break;
    default:
      cout << "Se ha seleccionado una opción incorrecta" << endl;
  }
  return 0;
}

int numeroImpar() {
  int num = 0;
  cout << "Ingresar un número impar: "; cin >> num;
  while (num % 2 == 0) {
    cout << "No es impar, vuélvelo a ingresar: "; cin >> num;
  }
  cout << "Sí es impar" << endl;
  return 0;
}

int sumaPares() {
  int total = 0;
  for (int i = 0; i < 101; i++) {
    if (i % 2 == 0) {
      total = total + i;
    }
  }
  cout << total << endl;
  return 0;
}

int mediaAritmetica() {
  int cantidad = 0, suma = 0, numero = 0, contador = 1;
  cout << "Ingresa la cantidad de números que se quieren promediar: "; cin >> cantidad;
  int contador2 = cantidad;
  while (contador2 > 0) {
    cout << contador << ") "; cin >> numero;
    suma = suma + numero;
    contador++;
    contador2--;
  }
  cout << "El promedio de los " << cantidad << " números introducidos es: " << suma / float(cantidad) << endl;
  return 0;
}

int numeroMagico() {
  int atinar = 0, intentos = 1;
  srand(time(0));
  int random = (rand() % 100) + 1;
  cout << "Ingrese un número entero del 1 al 100 para atinarle al número mágico: "; cin >> atinar;
  while (atinar != random) {
    if (atinar < random) {
      cout << "MAS: "; cin >> atinar;
    } else {
      cout << "MENOS: "; cin >> atinar;
    }
    intentos++;
  }
  cout << "Acertaste con el valor mágico " << random << " después de " << intentos << " intentos" << endl;
  return 0;
}

int conversionCelsiusFarenheit() {
  int Conversiones = 0, increm = 0, Celsius = 0;
  cout << "Ingrese el valor inicial en Celsius "; cin >> Celsius;
  cout << "Ingrese el número de conversiones que se quiere que hagan "; cin >> Conversiones;
  cout << "Ingrese el incremento en que irán "; cin >> increm;
  cout << "\nConversión de grados Celsius a Farenheit" << endl;
  cout << "Fahrenheit                       Celsius" << endl;
  int para = Celsius + ((Conversiones) * increm);
  while (para != Celsius) {
    cout << "    " << Celsius * (9/float(5)) + 32 << "                          " << Celsius << endl;
    Celsius = Celsius + increm;
  }
  return 0;
}

int serieAritmetica() {
  int a = 1, d = 3, n = 25, total = 0;
  for (int i = 0; i != n; i++) {
    total = total + (a + (i * d));
    cout << "Término " << i + 1 << ": " << a + i * d << '\n';
  }
  cout << "\nValor total de la serie: " << total << endl;
  return 0;
}

int mediasGeometricaArmonica() {
  int num = 1, mult = 1, cont = 0;
  float reci = 0;
  while (num != 0) {
    cout << "Ingresa un número: "; cin >> num;
    if (num != 0) {
      mult = mult * num;
      reci = reci + (1/float(num));
      cont++;
    }
  }
  cout << "La media geométrica de los números ingresados es " << pow(mult, 1/float(cont)) << ", y la media armónica es " << cont / float(reci) << endl;
  return 0;
}

int main() {
  char opc;
  bool a = true;
  while (a) {
    cout << "\nSelecciona una de las siguientes opciones: " << endl;
    cout << "\t1) Hacer operaciones con números." << endl;
    cout << "\t2) Recibir números hasta que sean impar." << endl;
    cout << "\t3) Sumar todos los números pares del 1 al 100" << endl;
    cout << "\t4) Calcular la media aritmética de una cantidad especificada de números." << endl;
    cout << "\t5) Atinarle a un 'Número mágico' random de entre 1 y 100." << endl;
    cout << "\t6) Convertir diversos valores de Celsius a Fahrenheit." << endl;
    cout << "\t7) Mostrar una serie aritmética y su valor total." << endl;
    cout << "\t8) Calcular la media geométrica y armónica de una serie de números recibidos." << endl;
    cout << "\tCualquier otro caracter: Salir." << endl;
    cout << "\nIngresa la opción escogida: "; cin >> opc;
    cout << "" << endl;
    switch (opc) {
      case '1':
        operaNumeros();
        break;
      case '2':
        numeroImpar();
        break;
      case '3':
        sumaPares();
        break;
      case '4':
        mediaAritmetica();
        break;
      case '5':
        numeroMagico();
        break;
      case '6':
        conversionCelsiusFarenheit();
        break;
      case '7':
        serieAritmetica();
        break;
      case '8':
        mediasGeometricaArmonica();
        break;
      default:
        a = false;
        break;
    }
  }
  return 0;
}
