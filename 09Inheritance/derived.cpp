/* derived.cpp */
// Member func defs for Derived class
#include "derived.hpp"

// Constr
Derived::Derived(int i, char c, double f)
  : Base1(i), Base2(c), real(f) {}

// Acc
double Derived::getReal() const { return real; }

// Operator overload
ostream& operator<<(ostream& output, const Derived& d) {
  output << "Integer:     " << d.value
         << "\nCharacter:   " << d.letter
         << "\nReal number: " << d.real;

  return output;
}
