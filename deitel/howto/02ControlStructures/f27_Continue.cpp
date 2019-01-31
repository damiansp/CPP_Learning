// Using continue
#include <iostream>
using std::cout;
using std::endl;

int main() {
  for (int x = 1; x <= 10; x++) {

    if (x == 7) {
      continue;
    }

    cout << x << " ";
  }

  cout << endl;
  
  return 0;
}
