#include <iostream>
#include <string>
#include "figure.hh"
#include "circle.hh"
#include "square.hh"
using namespace std;

// NOTE: using `Figure f` means the compiler will
// call `get_type()` from the Figure class.
// We need the compiler to execute the `get_type()` from the actual class
// passed in argument... this is dynamic link resolution / polymorphism.
// This is implemented with a virtual method on Figure.
// The only thing is we need to pass a POINTER to the figure object.
void describe(string name, Figure& f) {
  cout << "I am " << name;
  cout << ", a " << f.get_type();
  cout << " of area " << f.get_area() << endl;
}

// NOTE: can also be defined in header file
template<typename T> T kid(T const& left, T const& right) {
  return T(1);
}

int main() {
  Figure A;
  describe("A", A);
  cout << A.get_area() << endl;

  Figure B(5);
  describe("B", B);

  Figure C = A + B;
  describe("C", C);

  cout << "Is C greater than A ? " << (C > A) << endl;

  Circle G(2);
  describe("G", G);

  Square S(5);
  describe("S", S);

  Figure* FC;
  FC = new Circle(5);
  cout << FC->get_type() << endl;
  delete FC;

  Figure f = kid(A, B);
  describe("f", f);

  Circle c = kid(G, Circle(3));
  describe("c", c);

  return 0;
}
