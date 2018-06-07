/* stringSize.cpp */
// String size and capacity-related functions
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

void printStats(const string& str) {
  cout << "capacity: " << str.capacity()
       << "\nmax size: " << str.max_size()
       << "\nsize: " << str.size()
       << "\nlength: " << str.length()
       << "\nempty: " << (str.empty() ? "true" : "false") << endl;
}



int main() {
  string s;

  cout << "Stats for uninitialized string:\n";
  printStats(s);

  cout << "\n\nEnter a string:\n> ";
  cin >> s; // whitespace delimited
  cout << "The string entered was: " << s;

  cout << "\nStats for string:\n";
  printStats(s);

  s.resize(s.length() + 10);
  cout << "\nStats after s.resize(s.length() + 10):\n";
  printStats(s);

  cout << endl;

  return 0;
}
