/* strReplace.cpp */
// erase and replace for strings
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;


int main() {
  string s("The quick brown fox jumps over the lazy dog.........");

  // Remove all chars from loc 45 to end
  s.erase(45);
  cout << "After erase:\n" << s
       << "\n\nAfter replacement:\n";

  // Replace e with i and o with u
  int e = s.find("e"),
    o = s.find("o");

  while (e < string::npos) {
    s.replace(e, 1, "i");
    e = s.find("e", e + 1);
  }

  while (o < string::npos) {
    s.replace(o, 1, "u");
    o = s.find("o", o + 1);
  }

  cout << s << "\n\nAfter second replacement:\n";

  // Replace all a's with ya's (will overwrite chars)
  int a = s.find("a");
  while (a < string::npos) {
    s.replace(a, 2, "xxxxxyazzz", 5, 2);
    a = s.find("a", a + 1);
  }

  cout << s << endl;
  
  return 0;
}
