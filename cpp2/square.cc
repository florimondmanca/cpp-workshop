#include <iostream>
#include <string>
#include "square.hh"
using namespace std;

Square::Square(double _side) : side(_side) {}

string Square::get_type() const {
  return "Square";
}

double Square::get_area() const {
  return side * side;
}
