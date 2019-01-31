// Addition program
#include <iostream>

int main() {
  int integer1, integer2, sum;

  std::cout << "Enter first integer\n";
  std::cin >> integer1;
  std::cout << "Enter second integer\n";
  std::cin >> integer2;
  sum = integer1 + integer2;

  std::cout << "Sum is " << sum << std::endl;

  return 0;
}
