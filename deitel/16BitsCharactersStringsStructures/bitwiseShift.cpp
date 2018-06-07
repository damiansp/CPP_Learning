/* bitwiseShift.cpp */
#include <iomanip>
using std::setw;

#include <iostream>
using std::cout;
using std::endl;

void displayBits(unsigned val) {
  const int SHIFT = 8 * sizeof(unsigned) - 1;
  const unsigned MASK = 1 << SHIFT;

  cout << setw(7) << val << " = ";

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
  unsigned n1 = 960;

  cout << "The result of left shifting\n";
  displayBits(n1);
  cout << "8 bit positions using the left shift (<<) operator is\n";
  displayBits(n1 << 8);

  cout << "\nThe result of right shifting\n";
  displayBits(n1);
  cout << "8 bit positions using the right shift (>>) operator is\n";
  displayBits(n1 >> 8);
  
  return 0;
}
