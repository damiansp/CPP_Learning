/* BROKEN: Current attempt to return an array from playCraps() does not work;
 * need to learn how to do in C++
 */

/* Play mult games of craps and record odds */
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>
using std::time;

int rollDice(int nDice) {
  int total = 0;

  for (int die = 0; die < nDice; die++) {
    total += (1 + rand() % 6);
  }
  
  return total;
}

/* Play a game of craps return an array result = [status, nRolls], where
 * status is 1 if won, or 0 if lost and nRolls is the number of total rolls 
 */
int* playCraps() {
  enum Status { CONTINUE, WON, LOST };
  int sum, point;
  int result[2] = {0};
  Status gameStatus;

  sum = rollDice(2);
  result[1]++;

  // First roll
  switch(sum) {
  case 7:
  case 11:
    gameStatus = WON;
    break;
  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;
  default:
    gameStatus = CONTINUE;
    point = sum;
    cout << "Point is " << point << endl;
    break;
  }

  while (gameStatus == CONTINUE) {
    sum = rollDice(2);
    result[1]++;

    if (sum == point) {
      gameStatus = WON;
    } else {
      if (sum == 7) {
        gameStatus = LOST;
      }
    }
  }

  if (gameStatus == WON) {
    result[0] = 1;
  }

  return *result;
}


void printResults(int nGames, int nWon, int rollsToWin[], int rollsToLose[]) {
  int maxArraySize = 100;
  
  cout << "Results:" << endl;
  cout << "Won " << nWon << " out of " << nGames << " (" << 100 * nWon / nGames
       << "%)" << endl << endl;

  cout << "For wins--------------------------------------------------" << endl;
  cout << "Number of rolls: Frequency" << endl;

  for (int i = 0; i < maxArraySize; i++) {
    if (rollsToWin[i] != 0) {
      cout << i + 1 << ": " << rollsToWin[i];
    }
  }
  
  cout << "For losses------------------------------------------------" << endl;

  for (int i = 0; i < maxArraySize; i++) {
    if (rollsToLose[i] != 0) {
      cout << i + 1 << ": " << rollsToLose[i];
    }
  }

  cout << endl << endl;
  
}



int main() {
  int result[2] = {0};
  int nGames = 1000,
    totalWon = 0;
  const int maxRolls = 100;
  int rollsToWin[maxRolls] = {0};
  int rollsToLose[maxRolls] = {0};
  int impossiblyLongGames = 0;

  for (int g = 0; g < nGames; g++) {
    *result = playCraps();

    // If won
    if (result[0] == 1) {
      totalWon++;

      if (result[1] > 100) {
        rollsToWin[99]++;
        impossiblyLongGames++;
      } else {
        rollsToWin[result[1] - 1]++;
      }
    } else {
    // If lost
      if (result[1] > 100) {
        rollsToLose[99]++;
        impossiblyLongGames++;
      } else {
        rollsToLose[result[1] - 1]++;
      }
    }
  }

  printResults(nGames, totalWon, rollsToWin, rollsToLose);
}
