#include <string>
#include "figure.hh"
using namespace std;

class Square : public Figure {
private:
  double side;
public:
  Square(double side = 1);  // initialize with radius
  string get_type() const;
  double get_area() const;
};
