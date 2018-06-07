/* Flip a coin */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
#include <ctime>
using std::time;

bool randBinary() {
  return (1 + rand() % 2 == 1 ? true : false);
}


int main() {
  int nFlips,
    nHeads = 0,
    nTails = 0;

  
  srand(time(0));
  
  cout << "How many coin flips? ";
  cin >> nFlips;

  for (int i = 1; i <= nFlips; i++) {
    if (randBinary()) {
      cout << "H ";
      nHeads++;
    } else {
      cout << "T ";
      nTails++;
    }
  }

  cout << endl << "Total heads: " << nHeads << endl
       << "Total tails: " << nTails << endl;

  return 0;
}
