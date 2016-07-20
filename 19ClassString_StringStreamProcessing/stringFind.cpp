/* stringFind.cpp */
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;


int main() {
  // Compiler concatenates all parts into one string literal
  string s("The values in any left subtree are less than the value in the"
           "\nparent node and the values in the right subtree are greater than"
           "\nthe value in the parent node");

  // Find "subtre"e at locations 23 and 102
  cout << "Original string:\n" << s
       << "\n\n(find) \"subtree\" found at: " << s.find("subtree")
       << "\n(rfind) \"subtree\" found at: " << s.rfind("subtree");

  // Find 'p' in parent at locations 62 and 144
  cout << "\n(find_first_of) character in \"pqxz\": "
       << s.find_first_of("qpxz")
       << "\n(find_last_of) character in \"pqxz\": "
       << s.find_last_of("qpxz");

  // Find 'b' at location 25
  cout << "\n(find_first_not_of) character in \"adefhilnoprstuv T\": "
       << s.find_first_not_of("adefhilnoprstuv T");

  // Find last '\n'
  cout << "\n(find_last_not_of) character in \"adefhilnoprstuv T\": "
       << s.find_last_not_of("adefhilnoprstuv T") << endl;
  
  return 0;
}
