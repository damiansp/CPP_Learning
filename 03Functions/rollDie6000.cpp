/* Roll a 6-sided die 6000x */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>

int main() {
  int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,
    face;

  for (int roll = 1; roll <= 6000; roll++) {
    face = 1 + rand() % 6;

    switch (face) {
    case 1:
      ++one;
      break;
    case 2:
      ++two;
      break;
    case 3:
      ++three;
      break;
    case 4:
      ++four;
      break;
    case 5:
      ++five;
      break;
    case 6:
      ++six;
      break;
    default:
      cout << "Something is amiss in the universe." << endl;
    }
  }

  cout << "Face" << setw(13) << "Count"
       << "\n   1" << setw(13) << one
       << "\n   2" << setw(13) << two
       << "\n   3" << setw(13) << three
       << "\n   4" << setw(13) << four
       << "\n   5" << setw(13) << five
       << "\n   6" << setw(13) << six << endl;

  return 0;
}
