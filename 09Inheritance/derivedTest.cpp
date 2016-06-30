/* derivedTest.cpp */
// Driver for Derived class
#include <iostream>
using std::cout;
using std::endl;

#include "base1.hpp"
#include "base2.hpp"
#include "derived.hpp"

int main() {
  Base1 b1(10), *base1Ptr = 0;
  Base2 b2('Z'), *base2Ptr = 0;
  Derived d(7, 'A', 3.14159);

  // print data members of base class objs
  cout << "Object b1 contains int " << b1.getData()
       << "\nObject b2 contains char " << b2.getData()
       << "\nObject d contains:\n" << d << "\n\n";

  // print data members of derived class obj; :: resolves getData() ambiguity
  cout << "Data member of Derived can be accessed individually:"
       << "\nInteger:     " << d.Base1::getData()
       << "\nCharacter:   " << d.Base2::getData()
       << "\nReal Number: " << d.getReal() << "\n\n";

  cout << "Deried an be treated as an object of either base class:\n";

  // Treat Derived as Base1...
  base1Ptr = &d;
  cout << "base1Ptr -> getData(): " << base1Ptr -> getData() << '\n';

  // ...and as Base2
  base2Ptr = &d;
  cout << "base2Ptr -> getData(): " << base2Ptr -> getData() << endl;
  
  return 0;
}
