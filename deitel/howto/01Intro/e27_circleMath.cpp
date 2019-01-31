// Exercise 1.23
// Get to ints from user; print sum, diff, prod and quot
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  float r, circumference, area,
    pi = 3.14159;

  cout << "Enter the circle's radius: ";
  cin >> r;
  
  circumference = 2.0 * pi * r;
  area = pi * r * r;

  cout << "Circumference " << circumference << endl;
  cout << "Area: " << area << endl;

  return 0;
}
