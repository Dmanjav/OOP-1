#include <string>
#include <cmath>
#include <iostream>

#include "point.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle() : vertex1{0,0}, vertex2{50,30}, vertex3{25,10} {};
Triangle::Triangle(Point vertex1new, Point vertex2new, Point vertex3new) : vertex1{vertex1new}, vertex2{vertex2new}, vertex3{vertex3new} {};


double Triangle::perimeter(){
  double asd {vertex1.distance(vertex2) + vertex2.distance(vertex3) + vertex3.distance(vertex1)};
  return asd;
}

double Triangle::area(){
  double med {(vertex1.distance(vertex2) + vertex2.distance(vertex3) + vertex3.distance(vertex1))/2};
  return sqrt(med*(med-vertex1.distance(vertex2))*(med-vertex2.distance(vertex3))*(med-vertex3.distance(vertex1)));
}
