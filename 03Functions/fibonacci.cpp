/* Recursive Fibonacci Function */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Func proto
unsigned long fibonacci(unsigned long);

// Func defs
unsigned long fibonacci(unsigned long n) {
  // base case
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}



int main() {
  unsigned long res, num;

  cout << "Enter an int: ";
  cin >> num;
  res= fibonacci(num);
  cout << "Fibonacci(" << num << ") = " << res << endl;
  
  return 0;
}
