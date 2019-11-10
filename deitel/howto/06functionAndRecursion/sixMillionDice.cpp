#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;


int main() {
  int f1 = 0;
  int f2 = 0;
  int f3 = 0;
  int f4 = 0;
  int f5 = 0;
  int f6 = 0;
  int face;

  for (int roll = 1; roll <= 6000000; roll++) {
    face = 1 + rand() % 6;
    switch (face) {
    case 1:
      ++f1; break;
    case 2:
      ++f2; break;
    case 3:
      ++f3; break;
    case 4:
      ++f4; break;
    case 5:
      ++f5; break;
    case 6:
      ++f6; break;
    default:
      cout << "best be unreachable";
    }
  }
  cout << "Face" << setw(13) << "Frequency" << endl;
  cout << "   1" << setw(13) << f1 << "\n"
       << "   2" << setw(13) << f2 << "\n"
       << "   3" << setw(13) << f3 << "\n"
       << "   4" << setw(13) << f4 << "\n"
       << "   5" << setw(13) << f5 << "\n"
       << "   6" << setw(13) << f6 << endl;
  return 0;    
}
