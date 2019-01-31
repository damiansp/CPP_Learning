// Counter-Controlled Repetition
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int counter = 1;

  while (counter <= 10) {
    cout << counter << endl;
    ++counter;
  }

  return 0;
}
