/* Initializing an array */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  int i, n[10];

  for (i = 0; i < 10; i++) {
    n[i] = i * i;
  }

  cout << "Element" << setw(10) << "Value" << endl;

  for (i = 0; i < 10; i++) {
    cout << setw(7) << i << setw(10) << n[i] << endl;
  }

  // Same as previous for loop
  for (int i : n) {
    cout << setw(17) << i << endl;
  }
  
  return 0;
}
