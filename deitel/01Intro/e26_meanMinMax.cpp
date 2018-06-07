// Exercise 1.23
// Get to ints from user; print sum, diff, prod and quot
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int int1, int2, int3, sum, mean, min, max,
    n = 3;

  cout << "Enter three ints: ";
  cin >> int1 >> int2 >> int3;
  
  sum = int1 + int2 + int3;
  mean = sum / n;

  min = max = int1;
  if (int2 > int1) {
    max = int2;
  } else {
    min = int2;
  }

  if (int3 > max) {
    max = int3;
  } else if (int3 < min) {
    min = int3;
  }

  cout << "Min: " << min << endl;
  cout << "Max: " << max << endl;
  cout << "Mean: " << mean << endl;

  return 0;
}
