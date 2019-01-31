/* cin2.cpp */
// cin and cin.get
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int SIZE = 80;
  char buffer1[SIZE], buffer2[SIZE];

  cout << "Enter a sentence:\n";
  cin >> buffer1;
  cout << "\nThe string read with cin was:\n"
       << buffer1 << "\n\n";

  cin.get(buffer2, SIZE);
  cout << "The string read with cin.get was:\n"
       << buffer2 << endl;
  
  return 0;
}
