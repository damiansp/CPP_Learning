/* Given a radius, print the circumf and area to 5 digits */
#include <iostream>
#define PI 3.14159

using std::cin;
using std::cout;
using std::endl;

int main() {
  double r;

  cout << "Circle radius: ";
  cin >> r;
  cout << "Circumference: " << (2.0 * PI * r) << endl;
  cout << "Area: " << (PI * r * r) << endl;

  return 0;
}
