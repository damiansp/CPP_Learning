/* date1.cpp */
// Member func defs for Date class
#include <iostream>
using std::cout;
using std::endl;

#include "date1.h"

// Print date in (m)m/(d)d/yyyy format
void Date::print() const {
  cout << month << '/' << day << '/' << year; 
}

// Validate day based on month and year
int Date::checkDay(int testDay) {
  static int daysPerMonth[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  // Update feb days according to year
  if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
    daysPerMonth[2] = 29;
  } else {
    daysPerMonth[2] = 28;
  }
  
  if (testDay > 0 && testDay <= daysPerMonth[month]) {
    return testDay;
  }

  return 1;
}

// Constructor
Date::Date(int m, int d, int y) {
  // validate month
  if (m > 0 && m <= 12) {
    month = m;
  } else {
    month = 1;
    cout << "Month " << m << " invalid; set to 1\n";
  }

  year = y;
  day = checkDay(d);

  cout << "Date obect constructor for date ";
  print();
  cout << endl;
}

// Destructor
Date::~Date() {
  cout << "Date object destructor for date ";
  print();
  cout << endl;
}
