/* numberPrecision.cpp */
// using setprecision stream manipulator
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main() {
  double root2 = sqrt(2.0);
  int places;

  cout << setiosflags(ios::fixed)
       << "Sqrt(2) with precision 0 ~ 9\n"
       << "Precision set by the precision member function:" << endl;

  for (places = 0; places <= 9; places++) {
    cout.precision(places);
    cout << root2 << '\n';
  }

  cout << "\nPrecision set by the setprecision manipulator:\n";

  for (places = 9; places >= 0; places--) {
    cout << setprecision(places) << root2 << '\n';
  }
  
  return 0;
}
