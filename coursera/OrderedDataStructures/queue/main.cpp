#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <queue>
using std::queue;


int main() {
  queue<string> q;

  q.push("Orange");
  q.push("Blue");
  q.push("Illinois");
  cout << "First pop(): " << q.front() << endl;
  q.pop();
  q.push("Illini");
  cout << "Second pop(): " << q.front() << endl;
  q.pop();

  return 0;
}
