/* friend.cpp */
// Friends can access private (and protected) members of a class
#include <iostream>
using std::cout;
using std::endl;

class Count {
  friend void setX(Count &, int); // friend decalaration

public:
  Count() {
    x = 0;
  }

  void print() const {
    cout << x << endl;
  }

private:
  int x;
};


// friend, setX, can modify private data of Count
void setX(Count &c, int val) {
  c.x = val;
}



int main() {
  Count counter;

  cout << "counter.x after instantiation: ";
  counter.print();
  cout << "counter.x after call to setX() with friend function: ";
  setX(counter, 8);
  counter.print();

  return 0;
}
