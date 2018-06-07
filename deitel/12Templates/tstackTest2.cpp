/* tstackTest2.cpp */
// Driver for Stack template--
// main() uses a func template to manipulate Stack<T> objs
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "tstack1.hpp"

// Function template to manipulate Stack<T>
template<class T>
void testStack(
  Stack<T>& theStack, T value, T increment, const char* stackName) {

  cout << "\nPushing elements onto " <<  stackName << "\n";

  while (theStack.push(value)) {
    cout << value << ' ';
    value += increment;
  }

  cout << "\nStack is full; cannot push " << value
       << "\n\nPopping elements from " << stackName << '\n';

  while (theStack.pop(value)) {
    cout << value << ' ';
  }

  cout << "\nStack is empty; cannot pop.\n";
}



int main() {
  Stack<double> doubleStack(5);
  Stack<int> intStack;

  testStack(doubleStack, 1.1, 1.1, "doubleStack");
  testStack(intStack, 1, 1, "intStack");
  
  return 0;
}
