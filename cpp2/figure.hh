#include <string>
using namespace std;

#ifndef INC_FIGURE  // compilation variables
#define INC_FIGURE

class Figure {
protected:
  // Private attribute
  double area;
public:
  // Constructors
  // Figure();
  // Figure(double);  // argument name is optional
  // Equivalent to the two above and a default contructor assigning 1:
  Figure(double area=1);
  // Destructor
  virtual ~Figure();

  // Methods
  virtual double get_area() const;
  void set_area(double);
  // virtual: tell the compiler to check at runtime which version to run.
  virtual string get_type() const;
};

// Operator overloading
Figure operator+(Figure const&, Figure const&);
bool operator>(Figure const&, Figure const&);

#endif
