#include <string>
#include "point.h"
#include <cmath>
using namespace std;

Point::Point(): x{0.0},y{0.0}{}
Point::Point(double xNew,double yNew):x{xNew},y{yNew}{}

double Point::getx(){return x;}
double Point::gety(){return y;}
void Point::setx(double newX){x = newX;}
void Point::sety(double newY){y = newY;}

double Point::distance(Point p){
  return sqrt(pow(p.getx() - x,2) + pow(p.gety() - y,2));
}

string Point::print(){
  return "Point(" + to_string(x) + "," + to_string(y) + ")";
}
