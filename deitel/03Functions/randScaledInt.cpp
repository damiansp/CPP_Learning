/* Create a scaled, shifted rand int */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
/* rand() */

int main() {
  /* Create 20 rand ints on [1, 6] */
  for (int i = 1; i <= 20; i++) {
    cout << setw(10) << (1 + rand() % 6);

    /* line break after every 5 */
    if (i % 5 == 0) {
      cout << endl;
    }
  }

  return 0;
}
