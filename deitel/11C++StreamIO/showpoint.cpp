/* showpoint.cpp */
// Control printing of trailing 0s and decimal points for floating point vals
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;

#include <cmath>

int main() {
  cout << "Before setting ios::showpoint\n"
       << "9.9900 prints as: " << 9.9900
       << "\n9.9000 prints as: " << 9.9000
       << "\n9.0000 prints as: " << 9.0000
       << "\n\nAfter setting ios::showpoint\n";
  cout.setf(ios::showpoint);
  cout << "9.9900 prints as: " << 9.9900
       << "\n9.9000 prints as: " << 9.9000
       << "\n9.0000 prints as: " << 9.0000 << endl;

  return 0;
}
