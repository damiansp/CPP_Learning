#include <iostream>
using std::cout;
using std::endl;

class Pair {
public:
  int a;
  int b;

  int sum() { return a + b; }
};


int main() {
  Pair p;

  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) { cout << "Success!" << endl; }
  else {
    cout << "p.sum() returns " << p.sum() << "; should be " << p.a + p.b
         << endl;
  }
  return 0;
}
