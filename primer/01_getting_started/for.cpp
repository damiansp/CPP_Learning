#include <iostream>


int main() {
  int sum = 0;

  for (int val = 1; val <= 10; ++val) { sum += val; }
  std::cout << "Sum(1, 2, ..., 10) = " << sum << std::endl;

  return 0;
}
