#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  int f1{0};
  int f2{0};
  int f3{0};
  int f4{0};
  int f5{0};
  int f6{0};
  for (int roll{1}; roll <= 60'000'000; ++roll) {
    switch (const int face{1 + rand() % 6}; face) {
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
      cout << "What the?";
    }
  }
  cout << "Face" << setw(13) << "Frequency\n";
  cout << " 1" << setw(13) << f1
       << "\n 2" << setw(13) << f2
       << "\n 3" << setw(13) << f3
       << "\n 4" << setw(13) << f4
       << "\n 5" << setw(13) << f5
       << "\n 6" << setw(13) << f6 << endl;
  
  return 0;
}
