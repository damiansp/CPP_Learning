/* string1Test.cpp */
// Driver for String class
#include <iostream>
using std::cout;
using std::endl;

#include "string1.h"

int main() {
  String s1("happy"),
    s2(" birthday"),
    s3;

  // Test in/equalities
  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3
       << "\n\ns1 == s2: " << (s1 == s2 ? "true" : "false")
       << "\ns1 != s1: "   << (s1 != s2 ? "true" : "false")
       << "\ns1 > s2: "    << (s1 >  s2 ? "true" : "false")
       << "\ns1 >= s2: "   << (s1 >= s2 ? "true" : "false")
       << "\ns1 < s2: "    << (s1 <  s2 ? "true" : "false")
       << "\ns1 <= s2: "   << (s1 <= s2 ? "true" : "false") << endl;

  // Test !
  cout << "\n\nTesting !s3:\n";
  if (!s3) {
    cout << "s3 is empty.  Assigning s1 to s3;\n";
    s3 = s1;
    cout << "s3 is: " << s3;
  }

  // Test concat
  cout << "\n\ns1 += s2; s1: ";
  s1 += s2;
  cout << s1;

  // Test conversion constructor
  cout << "\n\ns1 += \" to you!\": ";
  s1 += " to you!";
  cout << s1 << "\n\n";

  // Test () substring operator
  cout << "The substring of s1 starting at location 0 that is 14 chars long: "
       << "s1(0, 14): " << s1(0, 14) << "\n\n";

  // Test to-end-of-string operation
  cout << "The substring of s1 from index 15 to end is: s1(15, 0): "
       << s1(15, 0) << "\n\n";

  // Test copy constructor
  String* s4Ptr = new String(s1);
  cout << "*s4Ptr: " << *s4Ptr << "\n\n";

  // Test self assignment
  cout << "Assigning *s4Ptr to *s4Ptr: ";
  *s4Ptr = *s4Ptr;
  cout << "*s4Ptr: " << *s4Ptr << '\n';

  // Destruct
  delete s4Ptr;

  // Index for lvalue
  s1[0] = 'H';
  s1[6] = 'B';
  cout << "Update s1[0] and s1[6]: " << s1 << "\n\n";

  // Test out-of-range error
  cout << "Attempt to assign 'd' to s1[30]: " << endl;
  s1[30] = 'd';
  
  return 0;
}
