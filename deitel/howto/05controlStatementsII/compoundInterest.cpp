#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw; // field width setting
using std::setprecision;

#include <cmath>
using std::pow;


int main() {
  double amount;
  double annualDepositAmount = 30000;
  double principal = 160000;
  double rate = 0.066;

  cout << "Year" << setw(21) << "Amount on deposit" << endl;
  cout << fixed << setprecision(2);
  for (int year = 1; year <= 10; year++) {
    amount = principal * pow(1.0 + rate, year);
    cout << setw(4) << year << setw(21) << amount << endl;
    principal += annualDepositAmount;
  }
  return 0;
}
