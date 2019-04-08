#include <iostream>
using std::cout;
using std::endl;


int main() {
  for (int i = 1; i <= 10; i++) {
    if (i % 3 == 0) { continue; }
    cout << i << " ";
  }
  cout << "\nUsed continue to skip multiples of 3" << endl;
  return 0;
}
