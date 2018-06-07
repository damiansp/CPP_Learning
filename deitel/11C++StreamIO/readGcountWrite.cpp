/* readGcountWrite.cpp */
// Unformatted I/O with read, gcount, and write
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int SIZE = 80;
  char buffer[SIZE];

  cout << "Enter a sentence:\n";
  cin.read(buffer, 20);
  cout << "\nThe sentence was:\n";
  cout.write(buffer, cin.gcount());
  cout << endl;
  
  return 0;
}
