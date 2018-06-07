/* streamErrors.cpp */
// Testing stream error states
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int x;

  cout << "Before a bad input operation:"
       << "\ncin.rdstate(): " << cin.rdstate()
       << "\ncin.eof():     " << cin.eof()
       << "\ncin.fail():    " << cin.fail()
       << "\ncin.bad():     " << cin.bad()
       << "\ncin.good():    " << cin.good()
       << "\n\nExpects an int, but enter a char: ";
  cin >> x;

  cout << "\nAfter a bad input operation:"
       << "\ncin.rdstate(): " << cin.rdstate()
       << "\ncin.eof():     " << cin.eof()
       << "\ncin.fail():    " << cin.fail()
       << "\ncin.bad():     " << cin.bad()
       << "\ncin.good():    " << cin.good() << "\n\n";

  cin.clear();

  cout << "After cin.clear()"
       << "\ncin.fail(): " << cin.fail()
       << "\ncin.good(): " << cin.good() << endl;
    
  
  return 0;
}
