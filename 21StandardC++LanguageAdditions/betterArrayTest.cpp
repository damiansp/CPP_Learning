/* betterArrayTest.cpp */
#include <iostream>
using std::cout;

#include "betterArray.hpp"

void outputArray(const Array& a) {
  cout << "The array contains:\n"
       << a << "\n\n";
}



int main() {
  Array ints(7);

  outputArray(ints);
  //outputArray(15); // Error
  outputArray(Array(15));

  return 0;
}
