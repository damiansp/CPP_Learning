#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Analysis.h"


void Analysis::processExamResults() {
  int passes = 0;
  int failures = 0;
  int counter = 1;
  int result;

  while (counter <= 10) {
    cout << "Enter result (1 = pass; 0 = fail): ";
    cin >> result;
    if (result == 1) { passes++; }
    else { failures++; }
    counter++;
  }
  cout << "Passed: " << passes << "\nFailed: " << failures << endl;
  if (passes > 8) { cout << "Great jerb!" << endl; }
}
