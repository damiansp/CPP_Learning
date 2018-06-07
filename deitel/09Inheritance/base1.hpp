/* base1.hpp */
// Base1 class def
#ifndef BASE1_H
#define BASE1_H

class Base1 {
public:
  // Constr.
  Base1(int x) { value = x; }

  // Acc.
  int getData() const { return value; }

protected:
  int value;
};

#endif
