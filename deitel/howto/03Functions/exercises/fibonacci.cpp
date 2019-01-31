/* Use non-recursive code to compute a fibonacci number
 * Use both int and double, and determine the largest number that can be 
 * computed with each 
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fibonacci(int n) {
  int fib_1 = 0,
    fib_2 = 1,
    fib_next;
  
  // Base cases
  if (n == 1) {
    return fib_1;
  }

  if (n == 2) {
    return fib_2;
  }

  for (int i = 3; i <= n; i++) {
    fib_next = fib_1 + fib_2;
    fib_1 = fib_2;
    fib_2 = fib_next;
  }

  return fib_next;
}

double fibonacci2(int n) {
  double fib_1 = 0.,
    fib_2 = 1.,
    fib_next;

  // Base cases
  if (n == 1) {
    return fib_1;
  }

  if (n == 2) {
    return fib_2;
  }

  for (int i = 3; i <= n; i++) {
    fib_next = fib_1 + fib_2;
    fib_1 = fib_2;
    fib_2 = fib_next;
  }

  return fib_next;
}



int main() {
  int n;
  double m;
  
  cout << "Find ith number in the Fibonacci sequence.  Enter i: ";
  cin >> n;
  cout << fibonacci(n) << endl;

  cout << "Try again with a double. " << endl
       << "Find ith number in the Fibonacci sequence.  Enter i: ";
  cin >> m;
  cout << fibonacci2(m) << endl;
  
  
  return 0;
}


// fib(47) is largest int
// fib(1477) is largest double
