// Demo of class member access operators: . and ->
// NOTE: deliberate use here of public data--normally a bad practice
#include <iostream>
using std::cout;
using std::endl;

class Count {
public:
  int x;
  void print() {
    cout << x << endl;
  }
};



int main() {
  Count counter,
    *counterPtr = &counter,
    &counterRef = counter;

  cout << "Assign 7 to x and print using object's name: ";
  counter.x = 7;
  counter.print();

  cout << "Assign 8 to x; print using a reference: ";
  counterRef.x = 8;
  counterRef.print();

  cout << "Assign 9 to x; print using a pointer: ";
  counterPtr -> x = 9;
  counterPtr -> print();

  return 0;
}
