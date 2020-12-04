#include <iostream>


int main() {
  int n1{0}; // init as 0
  int n2{0};
  int sum{0};

  std::cout << "Enter int1: ";
  std::cin >> n1;
  std::cout << "int2: ";
  std::cin >> n2;
  sum = n1 + n2;
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}
