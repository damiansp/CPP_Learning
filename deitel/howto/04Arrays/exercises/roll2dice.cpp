/* Simulate rolling 2 dice 3600 times; track freq of each total and output */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
#include <ctime>

int rollDice(void) {
  return (1 + rand() % 6) + (1 + rand() % 6);
}

void printResults(int freqs[]) {
  // print header
  cout << setw(15) << "Scores:";
  
  for (int i = 2; i <= 12; i++) {
    cout << setw(5) << i;
  }

  cout << endl;
  cout << setw(15) << "Frequencies:";
  
  // print frequencies
  for (int i = 1; i < 12; i++) {
    cout << setw(5) << freqs[i];
  }

  cout << endl << endl;
}



int main() {
  const int possibleValues = 12;
  int scores[possibleValues] = {0};
  int score = 0;
  int nRolls = 0;

  // seed rand
  srand(time(0));

  cout << "Simulate rolling 2 dice." << endl
       << "Number of rolls? ";
  cin >> nRolls;
  
  for (int i = 0; i < nRolls; i++) {
    score = rollDice();
    scores[score - 1]++;
  }

  printResults(scores);
  
  return 0;
}
