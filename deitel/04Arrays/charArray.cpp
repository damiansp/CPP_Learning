/* Treating char arrays as strings */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  char str1[20],
    str2[] = "string literal";

  cout << "Enter a string: ";
  cin >> str1;
  cout << "str1 is: " << str1
       << "\nstr2 is: " << str2
       << "\ninserting spaces... \n";
  
  for (int i = 0; str1[i] != '\0'; i++) {
    cout << str1[i] << ' ';
  }
  
  cin >> str1;
  cout << "\nstr1 is: " << str1 << endl << endl;
  
  return 0;
}
