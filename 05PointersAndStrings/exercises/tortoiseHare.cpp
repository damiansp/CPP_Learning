/* Race a tortoise and hare n units
 * Rand N     1  2  3  4  5  6  7  8  9 10
 * Hare     -12 -2 -2  0  0  1  1  1  9  9
 * Tortoise  -6 -6  3  3  3  3  3  1  1  1
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>
#include <ctime>

char race() {
  int tortoise = 0, // tortoise position
    hare = 0,       // hare     ""
    tRand,          // random number for tortoise, 
    hRand;          // and for hare (should be different if independent)
  const int raceLength = 70;

  // initialize random generator
  srand(time(0));

  while (tortoise < raceLength && hare < raceLength) {
    tRand = 1 + rand() % 10;
    hRand = 1 + rand() % 10;

    switch (tRand) {
    case 1:
    case 2:
      tortoise = (tortoise > 6 ? tortoise - 6 : 0); break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      tortoise += 3; break;
    case 8:
    case 9:
    case 10:
      tortoise++; break;
    }
    
    switch (hRand) {
    case 1:
      hare = (hare > 12 ? hare - 12 : 0); break;
    case 2:
    case 3:
      hare = (hare > 2 ? hare - 2 : 0); break;
    case 4:
    case 5:
      break;
    case 6:
    case 7:
    case 8:
      hare++; break;
    case 9:
    case 10:
      hare += 9;
    }

    // Print progress
    for (int t = 1; t < tortoise; t++) {
      cout << '-';
    }
    cout << "T\n";

    for (int h = 1; h < hare; h++) {
      cout << '-';
    }
    cout << "H\n";

    if (tortoise >= raceLength && hare >= raceLength) {
      cout << "It's a tie!\n";
    } else if (tortoise >= raceLength) {
      cout << "Tortoise wins!\n";
      return 't';
    } else if (hare >= raceLength) {
      cout << "Hare wins!\n";
      return 'h';
    } else {
      cout << "\n\n";
    }
  }

  return 'n';
}


int main() {
  // Run many races and keep stats
  int nRaces,
    tWins = 0,
    hWins = 0;
  char raceResult;
  
  cout << "Number of races? ";
  cin >> nRaces;

  for (int r = 0; r < nRaces; r++) {
    raceResult = race();
    if (raceResult == 't') {
      tWins++;
    } else if (raceResult == 'h') {
      hWins++;
    }
  }

  // Print summary
  cout << "Tortoise won " << tWins << endl
       << "Hare won " << hWins << endl
       << nRaces - tWins - hWins << " ties" << endl;

  return 0;
}
