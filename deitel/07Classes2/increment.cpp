/* increment.cpp */
// Using a member initializer to init a const of a built-in data type
#include <iostream>
using std::cout;
using std::endl;

class Increment {
public:
  Increment(int c = 0, int i = 1);
  void addIncrement();
  void print() const;

private:
  int count;
  const int increment;
};


// Constructor
Increment::Increment(int c, int i)
  : increment(i) { // init const member
  count = c;
}

// Printer
void Increment::print() const {
  cout << "count = " << count << ", increment = " << increment << endl;
}

void Increment::addIncrement() {
  count += increment;
}



int main() {
  Increment value(10, 5);

  cout << "Before incrementing: ";
  value.print();

  for (int i = 0; i < 5; i++) {
    value.addIncrement();
    cout << "After incrementing: " << i + 1 << ": ";
    value.print();
  }

  return 0;
}
