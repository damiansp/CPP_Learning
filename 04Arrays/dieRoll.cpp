/* Roll a die 6k times and record */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
#include <ctime>



int main() {
  const int arraySize = 7;
  int face,
    nRolls = 6000,
    freq[arraySize] = {0};

  srand(time(0));

  for (int roll = 1; roll <= nRolls; roll++) {
    ++freq[1 + rand() % 6];
  }

  cout << "Face" << setw(13) << "Freq" << endl;

  // ignore freq[0] (number of 0s)
  for (face = 1; face < arraySize; face++) {
    cout << setw(4) << face
         << setw(10) << freq[face] << endl;
  }

  return 0;
}
