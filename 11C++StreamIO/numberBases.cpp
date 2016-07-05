/* numberBases.cpp */
// Using hex, oct, dec, and setbase
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::dec;
using std::hex;
using std::oct;
using std::setbase;

int main() {
  int n;

  cout << "Enter a decimal number: ";
  cin >> n;

  cout << "hex: " << hex << n << '\n'
       << "dec: " << dec << n << '\n'
       << "oct: " << oct << n << '\n'
       << "decimal again: " << setbase(10) << n << endl;

  return 0;
}
