/* scientific.cpp */
// Display floating point values in system default, scientific, and fixed
// formats
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

int main() {
  double x = 0.001234567,
    y = 1.946e9;

  cout << "Default format:\n"
       << x << '\t' << y << '\n';

  cout.setf(ios::scientific, ios::floatfield);
  cout << "Scientific:\n"
       << x << '\t' << y << '\n';

  cout.setf(ios::fixed, ios::floatfield);
  cout << "Fixed format:\n"
       << x << '\t' << y << '\n';

  cout.unsetf(ios::fixed);
  cout << "Fixed unset (back to default):\n"
       << x << '\t' << y << endl;
  
  return 0;
}
