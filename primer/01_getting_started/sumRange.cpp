#include <iostream>


int main() {
  int sum = 0,
    n1 = 0,
    n2 = 0,
    lower = 0,
    upper = 0;

  std::cout << "Enter two integers: ";
  std::cin >> n1 >> n2;
  lower = (n1 < n2) ? n1 : n2;
  upper = (n2 > n1) ? n2 : n1;
  
  while (lower <= upper) {
    sum += lower++;
  }
  std::cout << "Sum[" << n1 << ", " << n2 << "] = " << sum << std::endl;

  return 0;
}
