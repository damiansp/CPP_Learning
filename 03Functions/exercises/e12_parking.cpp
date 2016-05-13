/* $2.00 for <= 3hrs,
 * 0.50 per hour (or fraction thereof after 3 hrs
 * maxCharge = 10.00
 * output tabulated data:
 * Car  Hours   Charge
 * for hours = { 1.5, 4.0, 14.2, 19.5 }
 * and total hours, total charge
 */

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;

double calculateCost(double hours) {
  double amount = 2.00;

  if (hours > 19.0) {
    return 10.00;
  } else if (hours > 3) {
    amount += (0.5 * (hours - 3.0));
  }

  return amount;
}

int main() {
  double amount, totalAmt = 0;
  double hours[] = { 1.5, 4.0, 14.2, 19.5 };
  double totalHours = 0;

  cout << setw(5) << "Car"
       << setw(6) << "Hours" << setw(6) << "Cost" << endl;
  for (int i = 0; i < 4; i++) {
    amount = calculateCost(hours[i]);
    cout << setiosflags(ios::fixed | ios::showpoint) << setw(5) << i + 1
         << setprecision(1) << setw(6) << hours[i]
         << setprecision(2) << setw(6) << amount << endl;
    totalAmt += amount;
    totalHours += hours[i];
  }
  cout << setw(5) << "Total" << setw(6) << setprecision(1) << totalHours
       << setw(6) << setprecision(2) << totalAmt
       << endl;
  
  return 0;
}
