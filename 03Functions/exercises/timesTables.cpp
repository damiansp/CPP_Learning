/* Create a program to test a child on multiplication */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>
using std::time;

int randDigit() {
  // return an int on [0, 9]
  return rand() % 9;
}

void giveFeedback(bool status) {
  // status: true = correct answer; false = wrong
  int selector = 1 + rand() % 4;
  
  if (status) {
    // right answer
    switch (selector) {
    case 1:
      cout << "Very good!" << endl;
      break;
    case 2:
      cout << "Excellent!" << endl;
      break;
    case 3:
      cout << "Nice job!" << endl;
      break;
    case 4:
      cout << "Keep up the good work!" << endl;
      break;
    }
  } else {
    // wrong
    switch (selector) {
    case 1:
      cout << "Nope. Try again." << endl;
      break;
    case 2:
    cout << "No siree. Try another one." << endl;
      break;
    case 3:
      cout << "Nope, but don't give up." << endl;
      break;
    case 4:
      cout << "You just plain suck at math." << endl;
      break;
    }
    
  }
}


int main() {
  int n1, n2, answer,
    nAnswers = 0, // number of times user has answered
    nCorrect = 0;
  double percentage = 1.0;
  bool correct;

  // init rand generator
  srand(time(0));

  while (percentage > 0.75) {
    n1 = randDigit();
    n2 = randDigit();

    cout << n1 << " x " << n2 << " = ";
    cin >> answer;
    nAnswers++;
    correct = (answer == n1 * n2 ? true : false);
    
    if (correct) {
      giveFeedback(correct);
      nCorrect++;
    }

    // Let them try again until correct
    while (!correct) {
      cout << "Try again." << endl;
      cin >> answer;
      nAnswers++;
      correct = (answer == n1 * n2 ? true : false);
      giveFeedback(correct);
    }

    percentage = (double) nCorrect / nAnswers;
    cout << "(Correct " << percentage << ")" << endl;
    
    if (nCorrect > 10 & percentage <= 0.75) {
      cout << "You better hit the books a bit more and try again another day."
           << endl;
      return 0;
    }
  }
  
  return 0;
}
