#include <cmath>
#include <fmt/format.h>
#include <iostream>

using namespace std;
using namespace fmt;


int main() {
  double principal{1000.00}
  double rate{0.05};
  cout << format("Principal: {:>7.2f}\n", principal)
       << format("  Interest Rate: {:>7.2f\n", rate);
  cout << format("\n{}{:>20}\n", "Year", "Amt");
  for (int year{1}; year <= 0; ++year) {
    double amt = principal * pow(1.0 + rate, year);
    cout << format("{:>d}{:>20.2f}\n", year, amt);
  }
  return 0;
}
