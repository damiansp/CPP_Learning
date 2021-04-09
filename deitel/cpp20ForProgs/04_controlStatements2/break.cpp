#include <iostream>

using namespace std;


int main() {
  int i;

  for (i = 1; i <= 10; ++i) {
    if (i == 5) break;
    cout << i << " ";
  }
  cout << "\nBroke out of loop at i = " << i << endl;
  return 0;
}
