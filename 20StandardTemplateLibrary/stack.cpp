/* stack.cpp */
// STL stack class
#include <iostream>
using std::cout;
using std::endl;

#include <list>
#include <stack>
#include <vector>

template<class T>
void popElements(T& s) {
  while (!s.empty()) {
    cout << s.top() << ' ';
    s.pop();
  }
}


int main() {
  std::stack<int> intDequeStack;
  std::stack<int, std::vector<int> > intVectorStack;
  std::stack<int, std::list<int> > intListStack;

  for (int i = 0; i < 10; ++i) {
    intDequeStack.push(i);
    intVectorStack.push(i);
    intListStack.push(i);
  }

  cout << "Popping from intDequeStack: ";
  popElements(intDequeStack);

  cout << "\nPopping from intVectorStack: ";
  popElements(intVectorStack);

  cout << "\nPopping from intListStack: ";
  popElements(intListStack);

  cout << endl;
  
  return 0;
}
