/* this.cpp */
// Using 'this' pointer to refer to object members
#include <iostream>
using std::cout;
using std::endl;

class Test {
public:
  Test(int = 0);
  void print() const;
private:
  int x;
};

Test::Test(int a) { x = a; }

void Test::print() const {
  cout << "         x = " << x
       << "\n this -> x = " << this -> x
       << "\n (*this).x = " << (*this).x << endl;
}



int main() {
  Test testObject(12);
  testObject.print();

  return 0;
}
