/* cout.cpp */
// String output with stream insertion
#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout << "Welcome to C++!\n";

  // Same result as...
  cout << "Welcome to ";
  cout << "C++!\n";

  // ...and
  cout << "Welcome to ";
  cout << "C++!";
  cout << endl;

  cout <<  "47 + 53 = " << 47 + 53 << endl;

  // Printing char* vars
  char* string = "test";
  cout << "string = " << string << endl
    // To get the address of the string
       << "static_cast<void*>(string) = " << static_cast<void*>(string)
       << endl;
  
  return 0;
}
 
