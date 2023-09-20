#include <string>
#include <iostream>
#include "alumno.h"
using namespace std;

Alumno::Alumno(string matricula , string nombre, int edad, string carrera):matricula{matricula}, nombre{nombre}, edad{edad}, carrera{carrera}{}
Alumno::Alumno(): matricula{"A01753486"}, nombre {"Diego"}, edad{18},carrera{"IRS"}{};

string Alumno::getMatricula(){return matricula;}
string Alumno::getNombre(){return  nombre;}
int Alumno::getEdad(){return edad;}
string Alumno::getCarrera(){return carrera;}
void Alumno::setMatricula(string mat){matricula = mat;}
void Alumno::setNombre(string n){nombre = n;}
void Alumno::setEdad(int e){edad = e;}
void Alumno::setCarrera(string c){carrera = c;}
string Alumno::print(){
    return "Alumno (" + nombre + "," + matricula + "," + to_string(edad) + "," + carrera + ")";
    }
void Alumno::imprimeAlumno(){
    cout << "Se muestran los datos del alumno:" << endl;
    cout << "Nombre del alumno: " << nombre << endl;
    cout << "Matricula del alumno: " << matricula << endl;
    cout << "La edad del alumno es : " << edad << endl;
    cout << "La carrera del alumno es : " << carrera << endl;

}
void Alumno::cumpleanios(){
    cout << "La edad del alumno va a ser: " + to_string(edad + 1) << endl;
}