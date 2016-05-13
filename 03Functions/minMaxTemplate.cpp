/* Create min and max templates */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>
T minimum(T val1, T val2, T val3) {
  T min = (val1 < val2 ? val1 : val2);
  min = (min < val3 ? min : val3);

  return min;
}

template <class T>
T maximum(T val1, T val2, T val3) {
  T max = (val1 > val2 ? val1 : val2);
  max = (max > val3 ? max : val3);

  return max;
}


int main() {
  int i1, i2, i3;
  double d1, d2, d3;
  char c1, c2, c3;

  cout << "Input 3 ints: ";
  cin >> i1 >> i2 >> i3;
  cout << "The max value is: " << maximum(i1, i2, i3) << endl
       << "The min value is: " << minimum(i1, i2, i3) << endl << endl;

  cout << "Input 3 decimal values: ";
  cin >> d1 >> d2 >> d3;
  cout << "The max value is: " << maximum(d1, d2, d3) << endl
       << "The min value is: " << minimum(d1, d2, d3) << endl << endl;

  cout << "Input 3 characters: ";
  cin >> c1 >> c2 >> c3;
  cout << "The max value is: " << maximum(c1, c2, c3) << endl
       << "The min value is: " << minimum(c1, c2, c3) << endl << endl;
  
  

  return 0;
}
