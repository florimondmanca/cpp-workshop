#include <string>
#include "figure.hh"
using namespace std;

class Circle : public Figure {
private:
  double radius;
public:
  Circle(double radius = 1);  // initialize with radius
  string get_type() const;
  double get_area() const;
};
