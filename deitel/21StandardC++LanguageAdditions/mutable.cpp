/* mutable.cpp */
#include <iostream>
using std::cout;
using std::endl;

class TestMutable {
public:
  TestMutable(int v = 0) { value = v; }
  void modifyValue() const { value++; }
  int getValue() const { return value; }
private:
  mutable int value;
};



int main() {
  const TestMutable tm(99);

  cout << "intitial value: " << tm.getValue();
  tm.modifyValue();
  cout << "\nmodified value: " << tm.getValue() << endl;

  return 0;
}
