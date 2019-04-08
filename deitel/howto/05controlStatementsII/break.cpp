#include <iostream>
using std::cout;
using std::endl;


int main() {
  int i;
  
  for (i = 1; i <= 10; i++) {
    if (i == 7) { break; }
    cout << i << " ";
  }
  cout << "\nBroke from loop at i = " << i << endl;
  return 0;
}
