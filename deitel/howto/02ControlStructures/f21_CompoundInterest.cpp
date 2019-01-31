// Calculate compound interest

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;

#include <cmath>

int main() {
  double amount,
         principal = 1000.00,
         rate = 0.05;

  cout << "Year" << setw(21) << "Amount on deposit" << endl;

  // Set float format
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

  for (int year = 1; year <= 10; year++) {
    amount = principal * pow(1.0 + rate, year);
    cout << setw(4) << year << setw(21) << amount << endl;
  }
  
  return 0;
}
