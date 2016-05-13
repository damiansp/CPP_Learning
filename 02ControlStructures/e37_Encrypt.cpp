#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int input, output, d1, d2, d3, d4;

  cout << "Enter a 4-digit number: ";
  cin >> input;

  /* Encrypt: For each digit add 7 then mod 10; 
     Then switch digits 1 & 3, and 2 & 4 */
  d1 = ((input / 1000) + 7) % 10;
  cout << d1 << endl;
  input %= 1000;

  d2 = ((input / 100) + 7) % 10;
  cout << d2 << endl;
  input %= 100;
  
  d3 = ((input / 10) + 7) % 10;
  cout << d3 << endl;
  input %= 10;
  
  d4 = (input + 7) % 10;
  cout << d4 << endl;

  /* out: 3-4-1-2 */
  output = 1000*d3 + 100*d4 + 10*d1 + d2;
  cout << "The encoded form is: " << output << endl;

  return 0;
}
