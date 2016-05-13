/* use inline for short, frequent functions */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// const means cube() cannot change the value of s
inline double cube(const double s) {
  return s * s * s;
}



int main() {
  double side;
  
  cout << "enter the cube's dimension: ";
  cin >> side;
  cout << "the cube's volume is " << cube(side) << endl;

  return 0;
}
