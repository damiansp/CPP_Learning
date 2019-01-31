/* uppercase.cpp */
// Used to format letters in hex
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::hex;
using std::ios;
using std::setiosflags;

int main() {
  cout << setiosflags(ios::uppercase)
       << "Uppercase printing for scientific and hex notations:\n"
       << 6.033e23 << '\n' << hex << 987654321 << endl;
  
  return 0;
}
