/* strInsert.cpp */
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string s1("the beginning and the end"),
    s2("the middle "),
    s3("12345678"),
    s4("xxx");

  cout << "Strings:\ns1 > " << s1 << "\ns2 > " << s2 << "\ns3 > " << s3
       << "\ns4 > " << s4 << "\n\n";

  s1.insert(14, s2);
  s3.insert(3, s4, 0, string::npos);

  cout << "After Insertions:\ns1 > " << s1 << "\ns2 > " << s2
       << "\ns3 > " << s3 << "\ns4 > " << s4 << "\n\n";
  
  return 0;
}
