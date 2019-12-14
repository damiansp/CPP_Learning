#include <iostream>
using std::cout;
using std::endl;


int main() {
  int primes[10] = {2, 3, 4, 7, 11, 13, 17, 19, 23};
  cout << "sizeof(int): " << sizeof(int) << endl;

  // Caluculate offset from beginning of array to index 2
  int offset = (long) &(primes[2]) - (long) &(primes[0]);
  cout << "offset from [0] and [2]: " << offset << endl;
    
  return 0;
}
