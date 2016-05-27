/* using strcat and strncat */
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>

int main() {
  char s1[20] = "Feliz ",
    s2[] = "Navidad ",
    s3[40] = "";

  cout << "s1:\n> " << s1 << "\ns2:\n> " << s2 << endl;
  cout << "strcat(s1, s2):\n> " << strcat(s1, s2) << endl;
  cout << "strncat(s3, s1, 6):\n> " << strncat(s3, s1, 6) << endl;
  cout << "strcat(s3, s1):\n> " << strcat(s3, s1) << endl;
  
  return 0;
}
