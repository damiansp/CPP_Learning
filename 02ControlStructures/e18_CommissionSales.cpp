// Calcualate salary as base + % of sales
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  double BASE_SALARY = 200.00,
         COMMISSION = 0.09,
         sales,
         salary;

  cout << "Enter weekly sales (-1 to end): ";
  cin >> sales;
  
  while (sales != -1) {
    salary = BASE_SALARY + sales * COMMISSION;
    cout << "Salary is: " << salary << endl;

    cout << "Enter weekly sales (-1 to end): ";
    cin >> sales;
  }
  
  return 0;
}
