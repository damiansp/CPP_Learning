// Member functions for class SalesPerson
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::setiosflags;
using std::ios;

#include "salesp.h"

// Constructor
SalesPerson::SalesPerson() {
  // init sales array
  for (int i = 0; i < 12; i++) {
    sales[i] = 0.0;
  }
}

// Set a single monthly sales fig (month on [0, 11])
void SalesPerson::setSales(int month, double amount) {
  // validate
  if (month >= 1 && month <= 12 && amount > 0) {
    sales[month - 1] = amount; // adjusts for 0 indexing
  } else {
    cout << "Invalid month or sales figure" << endl;
  }
}

// get sales figs from user
void SalesPerson::getSalesFromUser() {
  double salesFigure;

  for (int i = 1; i <= 12; i++) {
    cout << "Enter sales amount for month " << i << ": ";
    cin >> salesFigure;
    setSales(i, salesFigure);
  }
}

// Private util func: calculate total annual sales
double SalesPerson::totalAnnualSales() {
  double total = 0.0;

  for (int i = 0; i < 12; i++) {
    total += sales[i];
  }

  return total;
}

// Print annual sales total
void SalesPerson::printAnnualSales() {
  cout << setprecision(2)
       << setiosflags(ios::fixed | ios::showpoint)
       << "\nThe total annual sales are $"
       << totalAnnualSales() << endl;
}
