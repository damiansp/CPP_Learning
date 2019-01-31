/* tstackTest */
// Driver for tstack templat
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "tstack1.hpp"

int main() {
  Stack<double> doubleStack(5);
  double f = 1.1;
  cout << "Pushing elements ont doubleStack...\n";

  while (doubleStack.push(f)) { // push returns false if failed
    cout << f << ' ';
    f += 1.1;
  }

  cout << "\nStack is full; cannot push " << f
       <<"\n\nPopping elements from doubleStack\n";

  while (doubleStack.pop(f)) {
    cout << f << ' ';
  }

  cout << "\nStack is empty; cannot pop.\n";

  Stack<int> intStack; // defualts to size 10
  int i = 1;

  cout << "\nPushing elements onto intStack\n";

  while (intStack.push(i)) {
    cout << i++ << ' ';
  }

  cout << "\nStack is full; cannot push " << i
       << "\n\nPopping elemts from intStack\n";

  while (intStack.pop(i)) {
    cout << i << ' ';
  }

  cout << "\nStack is empty. Cannot pop.\n";
  
  return 0;
}
