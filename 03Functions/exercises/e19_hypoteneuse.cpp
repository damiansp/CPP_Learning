/* Given 2 legs of right triangle, calculate the hypoteneuse */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

double getHypoteneuse(double l1, double l2) {
  return sqrt(l1 * l1 + l2 * l2);
}

int main() {
  double l1, l2, hypoteneuse;

  cout << "Enter length of legs of the right triangle: ";
  cin >> l1 >> l2;

  hypoteneuse = getHypoteneuse(l1, l2);

  cout << "Hypoteneuse = " << hypoteneuse << endl;
    
  return 0;
}
