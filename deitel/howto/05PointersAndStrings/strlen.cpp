/* Using strlen */
#include <iostream>
using std::cout;
using std::endl;

#include <string>

int main() {
  char s1[] = "abcdefghijklmnopqrstuvwxyz",
    s2[] = "four",
    s3[] = "Chicago";

  cout << "string lengths:" << endl
       << "s1: " << s1 << " (" << strlen(s1) << ")" << endl
       << "s2: " << s2 << " (" << strlen(s2) << ")" << endl
       << "s3: " << s3 << " (" << strlen(s3) << ")" << endl;
  
  return 0;
}
