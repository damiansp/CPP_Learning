#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
  cout << fixed << setprecision(2);
  double principal{1000.00};
  double rate{0.05};

  cout << "Initial amount: " << principal << endl;
  cout << " Interest rate: " << rate << endl;
  cout << "\nYear" << setw(20) << "Amount" << endl;
  for (int year{1}; year <= 10; ++year) {
    double amount = principal * pow(1.0 + rate, year);
    cout << setw(4) << year << setw(20) << amount << endl;
  }
  return 0;
}
