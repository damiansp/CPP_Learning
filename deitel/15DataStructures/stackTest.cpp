/* stackTest.cpp */
#include <iostream>
#include "stack.hpp"
using std::endl;

int main() {
  Stack<int> intStack;
  Stack<double> doubStack;
  int popInt, i;
  double val = 1.1, popDoub;

  cout << "processing an integer Stack" << endl;

  for (i = 0; i < 4; i++) {
    intStack.push(i);
    intStack.printStack();
  }

  while (!intStack.isStackEmpty()) {
    intStack.pop(popInt);
    cout << popInt << " popped from Stack" << endl;
    intStack.printStack();
  }

  cout << "processing a double Stack" << endl;

  for (i = 0; i < 4; i++) {
    doubStack.push(val);
    doubStack.printStack();
    val += 1.1;
  }

  while (!doubStack.isStackEmpty()) {
    doubStack.pop(popDoub);
    cout << popDoub << " popped from Stack" << endl;
    doubStack.printStack();
  }
  
  return 0;
}
