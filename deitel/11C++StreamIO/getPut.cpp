/* getPut.cpp */
// Using get, put, eof
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  char c;

  cout << "Before input, cin.eof() is: " << cin.eof()
       << "\nEnter a sentence followed by EOF:\n";

  while ((c = cin.get()) != EOF) {
    cout.put(c);
  }

  cout << "\nEOF in this system is: " << c;
  cout << "\nAfter input, cin.eof() is " << cin.eof() << endl;
  
  return 0;
}
