// Exercise 1.23
// Get to ints from user; print sum, diff, prod and quot
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  cout << "A: " << static_cast< int >('A') << endl;
  cout << "B: " << static_cast< int >('B') << endl;
  cout << "C: " << static_cast< int >('C') << endl;
  cout << "a: " << static_cast< int >('a') << endl;
  cout << "b: " << static_cast< int >('b') << endl;
  cout << "c: " << static_cast< int >('c') << endl;
  cout << "0: " << static_cast< int >('0') << endl;
  cout << "1: " << static_cast< int >('1') << endl;
  cout << "2: " << static_cast< int >('2') << endl;
  cout << "$: " << static_cast< int >('$') << endl;
  cout << "*: " << static_cast< int >('*') << endl;
  cout << "+: " << static_cast< int >('+') << endl;
  cout << "/: " << static_cast< int >('/') << endl;
  cout << " : " << static_cast< int >(' ') << endl;

  return 0;
}
