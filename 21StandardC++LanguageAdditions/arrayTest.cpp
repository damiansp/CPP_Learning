/* arrayTest.cpp */
// Driver for Array class
#include <iostream>
using std::cout;

#include "array.hpp"

void outputArray(const Array& a) {
  cout << "The array contains:\n> " << a << "\n\n";
}



int main() {
  Array intArray(7);

  outputArray(intArray);
  outputArray(15); // convert 15 to Array, then output

  return 0;
}
