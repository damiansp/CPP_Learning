/* iterator.cpp */
// Using an iterator to output a string
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string s("Iterator tester");
  string::const_iterator i1 = s.begin();

  cout << "s = " << s << "\nUsing iterator i1, s is: ";

  while (i1 != s.end()) {
    // dereference iterator to get char
    cout << *i1 << ' ';
    // advance iterator to next char
    ++i1;
  }

  cout << endl;
  
  return 0;
}
