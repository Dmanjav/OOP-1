#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include <string>
#include <cmath>

using namespace std;

class Triangle{
    private:
        Point vertex1{};
        Point vertex2{};
        Point vertex3{};
    public:
        Triangle();
        Triangle(Point vertex1new, Point vertex2new, Point vertex3new);
        double perimeter();
        double area();
        string print();
};

#endif
