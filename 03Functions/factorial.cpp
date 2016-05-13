/* A recursive factorial function */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

// Function prototypes
unsigned long factorial(unsigned long);

// Func defs
// Recursive def of factorial()
unsigned long factorial(unsigned long number) {
  if (number <= 1 ) { // base case
    return 1;
  } else {
    return number * factorial(number - 1);
  }
}



int main() {
  for (int i = 0; i <= 10; i++) {
    cout << setw(2) << i << "! = " << factorial(i) << endl;
  }

  return 0;
}
