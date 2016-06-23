/* array1Test.cpp */
// Driver for Array class
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "array1.h"

int main() {
  cout << "# of arrays instantiated = " << Array::getArrayCount() << '\n';

  // Create 2 arrays and print Array count
  Array ints1(7), ints2;
  cout << "# of arrays instantiated = " << Array::getArrayCount() << "\n\n";

  // Print ints1 size and contents
  cout << "Size of array ints1 is " << ints1.getSize()
       << "\nArray after initialization:\n" << ints1 << '\n';

  // ...and ints2
  cout << "Size of array ints2 is " << ints2.getSize()
       << "\nArray after initialization:\n" << ints2 << '\n';

  // Input and print ints1 and ints2
  cout << "Input 17 integers:\n";
  cin >> ints1 >> ints2;
  cout << "After input, the arrays contain:\n"
       << "ints1:\n" << ints1 << "ints2:\n" << ints2 << '\n';

  // Test !=
  cout << "Evaluating ints1 != ints2\n";
  if (ints1 != ints2) {
    cout << "They are not equal.\n";
  }

  // Create ints3, a copy of ints1
  Array ints3(ints1);

  cout << "\nSize of array ints3 is " << ints3.getSize()
       << "\nArray after initialization:\n" << ints3 << '\n';

  // Test =
  cout << "Assigning ints2 to ints1;\n";
  ints1 = ints2;
  cout << "ints1:\n" << ints1 << "ints2:\n" << ints2 << '\n';

  // Test ==
  cout << "Evaluating: ints1 == ints2\n";
  if (ints1 == ints2) {
    cout << "They are equal.\n\n";
  }

  // Test [] to create rvalue
  cout << "ints1[5] is " << ints1[5] << '\n';

  // ... and lvalue
  cout << "Assigning 1000 to ints1[5]\n";
  ints1[5] = 1000;
  cout << "ints1:\n" << ints1 << '\n';

  // Test out-of-range index
  cout << "Attempt to assign 1000 to ints1[15]" << endl;
  ints1[15] = 1000; // out of range
  
    return 0;
}
