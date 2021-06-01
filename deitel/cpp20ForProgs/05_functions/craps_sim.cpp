#include <cstdlib>
#include <ctime>
#include <iostream>
#include "gsl/gls"
using namespace std;


int rollDice();


int main() {
  enum class Status {keepRolling, won, lost};

  srand(gsl::narrow_cast<unsigned int>(time(0)));

  int myPoint{0};
  Status gameStatus{Status::keepRolling};

  switch (const int sumOfDice{rollDice()}; sumOfDice) {
  case 7:
  case 11:
    gameStatus = Status::won; break;
  case 2:
  case 3:
  case 12:
    gameStatus = Status::lost; break;
  default:
    myPoint = sumOfDice;
    cout << "Point is " << myPoint << endl;
    break;
  }

  while (gameStatus == Status::KeepRolling) {
    if (const int sumOfDice{rollDice()}; sumOfDice == myPoint) {
      gameStatus == Status::won;
    } else {
      if (sumOfDice == 7) {
        gameStatus = Status::lost;
      }
    }
  }

  if (gameStatus == Status::won) cout << "You win!" << endl;
  else cout << "You lose!" << endl;
}
