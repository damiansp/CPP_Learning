// Using a function template
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <class T>
T maximum(T val1, T val2, T val3) {
  T max = val1;

  if (val2 > max) {
    max = val2;
  }

  if (val3 > max) {
    max = val3;
  }

  return max;
}


int main() {
  int i1, i2, i3;
  double d1, d2, d3;
  char c1, c2, c3;

  cout << "Input 3 ints: ";
  cin >> i1 >> i2 >> i3;
  cout << "The max value is: " << maximum(i1, i2, i3) << endl;

  cout << "Input 3 decimal values: ";
  cin >> d1 >> d2 >> d3;
  cout << "The max value is: " << maximum(d1, d2, d3) << endl;

  cout << "Input 3 characters: ";
  cin >> c1 >> c2 >> c3;
  cout << "The max value is: " << maximum(c1, c2, c3) << endl;
  
  return 0;
}
