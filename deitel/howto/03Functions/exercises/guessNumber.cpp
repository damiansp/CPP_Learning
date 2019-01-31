/* Have user guess an int between 1 and 1000 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
#include <ctime>

int pickNumber(int min, int max) {
  return min + rand() % max;
}


int main() {
  int n, guess,
    nTries = 1;
  bool playAgain = true;

  while (playAgain) {
    n = pickNumber(1, 1000);
    
    cout << "Try to guess my number between 1 and 1000: " << endl;
    cin >> guess;
    
    while (guess != n) {
      if (guess > n) {
        cout << "Lower" << endl;
      } else if (guess < n) {
        cout << "Higher" << endl;
      } else {
        cout << "That is not a valid reponse. Try again" << endl;
      }

      cout << "Guess again: ";
      cin >> guess;
      nTries++;
    }
    
    cout << "You got it!" << endl << "Only took you " << nTries << " guesses."
         << endl;
    if (nTries <= 10) {
      cout << "That was either lucky, or you know the trick!" << endl;
    }
    cout << "Play again? (1 for yes, 0 for no): ";
    cin >> playAgain;
    nTries = 1;
  }
    
  return 0;
}
