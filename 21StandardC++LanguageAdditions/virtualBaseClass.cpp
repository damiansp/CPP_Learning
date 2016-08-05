/* virtualBaseClass.cpp */
#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
  // implicit default constr
  
  virtual void print() const = 0; // pure virtual
};


class Deriv1 : virtual public Base {
  // implicit default constr calls Base default constr

  // override print()
  void print() const { cout << "Deriv1\n"; }
};


class Deriv2 : virtual public Base {
public:
  // implicit default constr calls Base default constr

  // override print()
  void print() const { cout << "Deriv2\n"; }
};


class Mult : public Deriv1, public Deriv2 {
public:
  // implicit default constr calls Deriv1 and Deriv2 default constrs

  // qualify version of print()
  void print() const { Deriv2::print(); }
};



int main() {
  Mult both;
  Deriv1 d1;
  Deriv2 d2;
  Base* array[] = { &both, &d1, &d2 };

  // polymorphically invoke print()
  for (int i = 0; i < 3; i++) {
    array[i]->print();
  }
  
  return 0;
}
