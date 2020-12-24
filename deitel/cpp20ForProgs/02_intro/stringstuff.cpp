#include <iostream>
#include <string>

using namespace std;


int main() {
  string s1{"happy"};
  string s2{" birthday"};
  string s3; // ""

  cout << "s1: \"" << s1 << "\"; length: " << s1.length()
       << "\ns2: \"" << s2 << "\"; length: " << s2.length()
       << "\ns3: \"" << s3 << "\"; length: " << s3.length();
  cout << "\nCompare strings:" << boolalpha
       << "\ns2 == s1: " << (s2 == s1)
       << "\ns2 != s1: " << (s2 != s1);
  if (s3.empty()) {
    cout << "\ns3 empty; assigning value...";
    s3 = s1 + s2;
    cout << "\ns3: \"" << s3 << "\"";
  }
  cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << endl;
  cout << "s2 starts with \"ha\": " << s2.starts_with("ha") << endl;
  cout << "s3 ends with \"ay\": " << s3.ends_with("ay") << endl;
    
  return 0;
}
