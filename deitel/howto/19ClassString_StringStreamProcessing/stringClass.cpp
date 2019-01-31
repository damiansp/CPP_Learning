/* stringClass.cpp */
// String assignment and concatenation
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string s1("cat"),
    s2 = s1,
    s3;
  
    s3.assign(s1);

  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\n\n";

  // Alter strings
  s2[0] = s3[2] = 'r';

  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\n\n";
  
  // Member function, at()
  int len = s3.length();

  for (int x = 0; x < len; ++x) {
    cout << s3.at(x) << ' ';
  }

  cout << endl;

  // Concat
  string s4(s1 + "apult"),
    s5;

  // += overload
  s3 += "pet";
  s1.append("acomb");

  // More on append(what, start, end)
  s5.append(s1, 4, s1.size());
  string s6 = s5.append(s1, 4, s1.length());

  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3
       << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6: " << s6 << "\n\n";

  cout << "s4: " << s4
       << "\ns4.length(): " << s4.length()
       << "\ns4.size(): " << s4.size() << endl;

  return 0;
}
