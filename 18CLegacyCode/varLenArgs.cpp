/* varLenArgs.cpp */
// Using variable-length argument lists (C legacy)
#include <cstdarg>
#include <iomanip>
using std::setiosflags;
using std::setprecision;
using std::setw;

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

double mean(int i, ...) {
  double total = 0;
  va_list ap;
  va_start(ap, i);

  for (int j = 1; j <= i; j++) {
    total += va_arg(ap, double);
  }

  va_end(ap);

  return total / i;
}



int main() {
  double w = 37.5,
    x = 22.5,
    y = 1.7,
    z = 10.2;

  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1)
       << "w = " << w << "\nx = " << x << "\ny = " << y << "\nz = " << z
       << endl;

  cout << setprecision(3) << "\nmean(w, x) = " << mean(2, w, x)
       << "\nmean(w, x, y) = " << mean(3, w, x, y)
       << "\nmean(w, x, y, z) = " << mean(4, w, x, y, z) << endl;

  return 0;
}
