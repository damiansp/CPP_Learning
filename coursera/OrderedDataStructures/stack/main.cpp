#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <stack>
using std::stack;


int main() {
  stack<string> s;

  s.push("orange");
  s.push("blue");
  s.push("Illinois");
  cout << "First pop(): " << s.top() << endl;
  s.pop();
  s.push("Illini");
  cout << "Second pop(): " << s.top() << endl;
  return 0;
}
