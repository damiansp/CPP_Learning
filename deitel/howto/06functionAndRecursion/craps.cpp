#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <iostream>
using std::cout;
using std::endl;


int rollDice() {
  int d1 = 1 + rand() % 6;
  int d2 = 1 + rand() % 6;
  int sum = d1 + d2;

  cout << "You rolled " << d1 << " + " << d2 << " for " << sum << endl;
  return sum;
}


int main() {
  enum Status {CONTINUE, WON, LOST};
  int myPoint;
  Status gameStatus;
  srand(time(0)); // seed
  int sumOfDice = rollDice();

  switch (sumOfDice) {
  case 2:
  case 3:
  case 12:
    gameStatus = LOST; break;
  case 7:
  case 11:
    gameStatus = WON; break;
  default:
    gameStatus = CONTINUE;
    myPoint = sumOfDice;
    cout << "Point is " << myPoint << endl; break;
  }
  while (gameStatus == CONTINUE) {
    sumOfDice = rollDice();
    if (sumOfDice == myPoint) { gameStatus = WON; }
    else if (sumOfDice == 7) { gameStatus = LOST; }
  }
  if (gameStatus == WON) { cout << "You win!" << endl; }
  else { cout << "You lose :(" << endl; }
  return 0;
}
