/* autoPtr.cpp */
// Demo auto_ptr
#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::auto_ptr;

class Integer {
public:
  // Constr/Destr
  Integer(int i = 0) : value(i) {
    cout << "Constructor for Integer " << value << endl; 
  }
  ~Integer() {
    cout << "Destructor for Integer " << value << endl;
  }

  // Acc
  void setInteger(int i ) { value = i; }
  int getInteger() const { return value; }

private:
  int value;
};



int main() {
  cout << "Creating and auto_ptr objec that points to an Integer\n";

  auto_ptr<Integer> integerPtr(new Integer(7));

  cout << "Using the auto_ptr to manipulate the Integer\n";
  integerPtr -> setInteger(99);

  cout << "Integer after setInteger: " << (*integerPtr).getInteger()
       << "\nTerminating program." << endl;
  
  return 0;
}
