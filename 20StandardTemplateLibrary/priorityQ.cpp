/* priorityQ.cpp */
// STL priority_queue class
#include <iostream>
using std::cout;
using std::endl;

#include <queue>


int main() {
  std::priority_queue<double> priorities;

  priorities.push(3.2);
  priorities.push(9.8);
  priorities.push(5.4);

  cout << "Popping from priorities: ";

  while (!priorities.empty()) {
    cout << priorities.top() << ' ';
    priorities.pop();
  }

  cout << endl;
  
  return 0;
}
