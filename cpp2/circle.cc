#include <iostream>
#include "circle.hh"
using namespace std;

Circle::Circle(double _radius) : radius(_radius) {}

string Circle::get_type() const {
  return "Circle";
}

double Circle::get_area() const {
  return 3.1415 * radius * radius;
}
