#include <iostream>


int main() {
  int n1;
  int n2;
  int sum;

  std::cout << "First int: ";
  std::cin >> n1;
  std::cout << "Second int: ";
  std::cin >> n2;
  sum = n1 + n2;
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}
