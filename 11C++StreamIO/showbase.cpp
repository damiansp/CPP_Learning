/* showbase.cpp */
// ios::showbase demo
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::hex;
using std::ios;
using std::oct;
using std::setiosflags;

int main() {
  int x = 1976;

  cout << setiosflags(ios::showbase)
       << "Printing ints with bases:\n"
       << x << '\n'
       << oct << x << '\n'
       << hex << x << endl;
  
  return 0;
}
