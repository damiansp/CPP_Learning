/* getline.cpp */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int SIZE = 80;
  char buffer[SIZE];

  cout << "Enter a sentence:\n";
  cin.getline(buffer, SIZE);

  cout << "\nThe sentence entered was: \n" << buffer << endl;
  
  return 0;
}
