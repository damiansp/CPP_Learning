/* badIncrement.cpp */
// Attempting to init const of built-in data type with assignment
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

Increment::Increment(int c, int i) {
  // Constant member 'increment' not initialized
  count = c;
  increment = i; // Error: can't modify const object
}

void Increment::addIncrement() {
  count += increment;
}

void Increment::print() const {
  cout << "count = " << count << ", increment = " << increment << endl;
}



int main() {
  Increment value(10, 5);

  cout << "Before incrementing: ";
  value.print();

  for (int j = 0; j < 3; j++) {
    value.addIncrement();
    cout << "After increment " << j << ": ";
    value.print();
  }
  
  return 0;
}
