/* union.cpp */
#include <iostream>
using std::cout;
using std::endl;

union Number {
  int x;
  double y;
};


int main() {
  Number value;

  value.x = 100;

  cout << "Put a value in the integer member and print both members.\n"
       << "int: " << value.x << "\tdouble: " << value.y << "\n\n";

  value.y = 100.0;

  cout << "Put a value in the double member and print both.\n"
       << "int: " << value.x << "\tdouble: " << value.y << endl;
  
  return 0;
}
