#ifndef POINT_H
#define POINT_H

#include <string>

class Point{
  private:
    double x {0.0};
    double y {0.0};
  public:
    Point();
    Point(double xNew,double yNew);

    double getx();
    double gety();
    void setx(double newX);
    void sety(double newY);

    double distance(Point p);
    std::string print();
};//clase point

#endif
