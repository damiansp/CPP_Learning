/* constCast.cpp */
// const_cast operator demo
#include <iostream>
using std::cout;
using std::endl;

class ConstCastTest {
public:
  void setNumber(int);
  int getNumber() const;
  void printNumber() const;

private:
  int number;
};

void ConstCastTest::setNumber(int num) { number = num; }
int ConstCastTest::getNumber() const { return number; }
void ConstCastTest::printNumber() const {
  cout << "\nNumber after modification: ";

  // The expression "number--" would generate a compile error; undo const to
  // allow modification
  const_cast<ConstCastTest*>(this)->number--;
  cout << number << endl;
}



int main() {
  ConstCastTest x;

  x.setNumber(8);
  cout << "Initial value of number: " << x.getNumber();
  x.printNumber();
  
  return 0;
}
