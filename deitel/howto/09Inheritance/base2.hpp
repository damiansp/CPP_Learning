/* base2.hpp */
// Base2 class def
#ifndef BASE2_H
#define BASE2_H

class Base2 {
public:
  // Constr
  Base2(char c) { letter = c; }

  // Acc
  char getData() const { return letter; }

protected:
  char letter;
};

#endif
