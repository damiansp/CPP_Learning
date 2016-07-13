/* bitwiseLogical.cpp */
// Using bitwise AND, OR, XOR, NOT
#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void displayBits(unsigned val) {
  const int SHIFT = 8 * sizeof(unsigned) - 1;
  const unsigned MASK = 1 << SHIFT;

  cout << setw(10) << val << " = ";

  for (unsigned c = 1; c <= SHIFT + 1; c++) {
    cout << (val & MASK ? '1' : '0');
    val <<= 1;

    if (c % 8 == 0) {
      cout << ' ';
    }
  }

  cout << endl;
}


int main() {
  unsigned n1 = 2179876455,
    n2 = 199,
    mask = 1,
    setBits = 241;

  cout << "The result of combining the following\n";
  displayBits(n1);
  displayBits(mask);
  cout << "using the bitwise AND (&) operator is\n";
  displayBits(n1 & mask);

  n1 = 15;

  cout << "\nThe result of combining the following\n";
  displayBits(n1);
  displayBits(setBits);
  cout << "using the bitwise OR (|) operator is\n";
  displayBits(n1 | setBits);

  n1 = 139;
  cout << "\nThe reuslt of the following is\n";
  displayBits(n1);
  displayBits(n2);
  cout << "using the bitwise XOR (^) operator is\n";
  displayBits(n1 ^ n2);

  n1 = 21845;
  cout << "\nThe one's complement of\n";
  displayBits(n1);
  cout << "is";
  displayBits(~n1);
  
  return 0;
}
