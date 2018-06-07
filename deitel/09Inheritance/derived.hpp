/* derived.hpp */
// Derived class def; inherits from Base1 and Base2
#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
using std::ostream;

#include "base1.hpp"
#include "base2.hpp"

// Mult inheritance
class Derived : public Base1, public Base2 {
  friend ostream& operator<<(ostream&, const Derived&);

public:
  // Constr.
  Derived(int, char, double);

  // Acc.
  double getReal() const;

private:
  double real;
};

#endif
