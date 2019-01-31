// Using break
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int x;

  for (x = 1; x <= 10; x++) {
    if (x == 7) {
      break;
    }

    cout << x << " ";
  }

  cout << "\nBroke loop at x = " << x << endl;
  return 0;
}
