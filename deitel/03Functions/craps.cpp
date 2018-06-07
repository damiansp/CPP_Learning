/* Play a game of craps */
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>
using std::time;

int rollDice() {
  int d1, d2, workSum;

  d1 = 1 + rand() % 6;
  d2 = 1 + rand() % 6;
  workSum = d1 + d2;

  cout << "Player rolled a " << d1 << " and a " << d2 << ": " << workSum
       << endl;

  return workSum;
}



int main() {
  enum Status { CONTINUE, WON, LOST };
  int sum, point;
  Status gameStatus;

  srand(time(0)); // use clock time to seed rand generator
  sum = rollDice();

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
    sum = rollDice();

    if (sum == point) {
      gameStatus = WON;
    } else {
      if (sum == 7) {
        gameStatus = LOST;
      }
    }
  }
  
  if (gameStatus == WON) {
    cout << "You win!" << endl;
  } else {
    cout << "You lose!"  << endl;
  }
    
  return 0;
}
