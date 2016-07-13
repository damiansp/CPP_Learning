/* bitwiseOperator.cpp */
// Printing unsigned ints in bits
#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
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
  unsigned x;

  cout << "Enter an unsigneted integer: ";
  cin >> x;
  displayBits(x);

  return 0;
}
