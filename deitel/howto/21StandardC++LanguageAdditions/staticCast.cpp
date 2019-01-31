/* staticCast.cpp */
// static_cast operator demo
#include <iostream>
using std::cout;
using std::endl;

class BaseClass {
public:
  void f(void) const { cout << "BASE\n"; }
};

class DerivedClass : public BaseClass {
public:
  void f(void) const { cout << "DERIVED\n"; }
};

void test(BaseClass* basePtr) {
  DerivedClass* derivedPtr;

  // Cast base class pointer as derived class pointer
  derivedPtr = static_cast<DerivedClass*>(basePtr);
  derivedPtr->f();
}



int main() {
  double d = 8.22;
  int x = static_cast<int>(d);
  BaseClass* basePtr = new DerivedClass;

  
  cout << "d: " << d << "\nx: " << x << endl;
  test(basePtr);
  delete basePtr;
    
  return 0;
}
