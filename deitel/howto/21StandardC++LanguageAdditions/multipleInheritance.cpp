/* multipleInheritance.cpp */
// Polymorphically call a function, multiply, inherited from 2 base classes
#include <iostream>
using std::cout;
using std::endl;

class Base {
public:
  virtual void print() const = 0; // print virtual
};


class Derived1 : public Base {
public:
  // override print()
  void print() const { cout << "Derived1\n"; }
};


class Derived2 : public Base {
public:
  // override print()
  void print() const { cout << "Derived2\n"; }
};


class Multiple : public Derived1, Derived2 {
public:
  // qualify which version of print()
  void print() const { Derived2::print(); }
};



int main() {
  Multiple both;
  Derived1 one;
  Derived2 two;
  Base* array[3];

  //array[0] = &both; // Error: ambiguous
  array[1] = &one;
  array[2] = &two;

  // Polymorphically invoke print
  for (int k = 0; k < 3; k++) {
    array[k] -> print();
  }

  return 0;
}
