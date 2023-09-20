#include <string>
#include "apagador.h"
using namespace std;

Apagador::Apagador() : encendido{0}{}

void Apagador::encender(){encendido=true;}
void Apagador::apagar(){encendido=false;}
bool Apagador::isEncendido(){return encendido;}
string Apagador::print(){return "Apagador (" + to_string(encendido) + ")" ;}
