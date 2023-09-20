#include "foco.h"
#include <string>
using namespace std;

Foco::Foco(): luminosidad{60}, color {"Blanco"}{}
Foco::Foco(int lum, string col): luminosidad{lum}, color{col}{}

int Foco::getLuminosidad() {return luminosidad;}
string Foco::getColot(){return color;}

string Foco::print(){
    return "Foco (" + to_string(luminosidad) + "," + color + ")";
}