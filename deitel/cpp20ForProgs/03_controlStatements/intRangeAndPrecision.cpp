#include <iostream>
#include "bignumber.h" // https://github.com/limeoats/BigNumber

using namespace std;


int main() {
  long long val1{9'223'372'036'854'775'807LL}; // max long long val

  cout << "long long val1: " << val1
       << "\n val1 - 1: " << val1 - 1 // OK
       << "\n val1 + 1: " << val1 + 1; // undef

  BigNumber val2{val1};

  cout << "\n\nBigNumber val2: " << val2
       << "\n - 1: " << val2 - 1
       << "\n + 1: " << val2 + 1; // OK

  long long val3{100'000'000};

  cout << "\n\nval3: " << val3;

  int counter{2};

  while (counter <= 5) {
    val3 *= 100'000'000;
    count << "\nval3^" << counter++ << ": " << val3;
  }

  BigNumber val4{100'000'000};
  
  counter = 2;
  while (counter <= 5) {
    cout << "val4.pow(" << counter << "): " << val4.pow(counter++) << endl;
  }
  count << endl;
  
  return 0;
}
