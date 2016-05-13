// Print values of n, 10n, 100n, and 1000n in columns
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  //int n;

  cout << setw(3) << "n" << setw(5) << "10n" << setw(6) << "100n" << setw(7)
       << "1000n" << endl;

  for (int i = 1; i <= 5; i++) {
    cout << setw(3) << i << setw(5) << 10 * i << setw(6) << 100 * i << setw(7)
         << 1000 * i << endl;
  }
  
  return 0;
}
