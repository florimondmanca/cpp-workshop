#include <iostream>
#include <string>
#include "figure.hh"
using namespace std;

Figure::Figure(double _area) : area(_area) {}

Figure::~Figure() {
  // Nothing special here.
}

string Figure::get_type() const {
  return "Figure";
}

// NOTE: const is required to tell C++ that this method doesn't change
// the object, making it usable on const& objects.
double Figure::get_area() const {
  // NOTE: `this` is a pointer
  // NOTE: `return area;` works too
  return this->area;
}

void Figure::set_area(double _area) {
  area = _area;
}

Figure operator+(Figure const& left, Figure const& right) {
  return Figure(left.get_area() + right.get_area());
}

bool operator>(Figure const& left, Figure const& right) {
  return left.get_area() > right.get_area();
}
