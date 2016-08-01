/* bitsetSieve.cpp */
// Using a bitset to demo the Sieve of Eratosthenes
#include <bitset>
#include <cmath>
#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const int SIZE = 1024;
  int i, value, counter;
  std::bitset<SIZE> sieve;

  sieve.flip();

  // Perform Sieve of Eratosthenes
  int finalBit = sqrt(sieve.size()) + 1;

  for (i = 2; i < finalBit; ++i) {
    if (sieve.test(i)) {
      for (int j = 2 * i; j < SIZE; j += i) {
        sieve.reset(j);
      }
    }
  }

  cout << "The prime number on [2, 1023] are:\n";

  for (i = 2, counter = 0; i < SIZE; ++i) {
    if (sieve.test(i)) {
      cout << setw(5) << i;

      if (++counter % 12 == 0) {
        cout << '\n';
      }
    }
  }

  cout << endl;

  // Get a vlue from the user to determine if it is prime
  cout << "\nEnter an int on [1, 1023] (-1 to quit): ";
  cin >> value;

  while (value != -1) {
    if (sieve[value]) {
      cout << value << " is prime\n";
    } else {
      cout << value << " is not prime\n";
    }

    cout << "\nEnter another int on [1, 1023] (-1 to quit): ";
    cin >> value;
  }
  
  return 0;
}
