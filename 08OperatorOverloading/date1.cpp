/* date1.cpp */
// Date class member funcs
#include <iostream>
#include "date1.h"

// Initialize static member
const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Accessors----------------------------
void Date::setDate(int m, int d, int y) {
  month = (m >=1 && m <= 12) ? m : 1;
  year  = (y >= 1900 && y <= 2100) ? y : 1900;

  // test for leap year
  if (month == 2 && leapYear(year)) {
    day = (d >= 1 && d <= 29) ? d : 1;
  } else {
    day = (d >= 1 && d <= days[month]) ? d : 1;
  }
}

// Constructor--------------------------
Date::Date(int m, int d, int y) { setDate(m, d, y); }

// Operator overloads-------------------
// Pre-incr
Date& Date::operator++() {
  helpIncrement();
  return *this;
}

// Post-incr
Date Date::operator++(int) { // <- note dummy int param has no name
  Date temp = *this;
  helpIncrement();

  // return non-incremented, saved, temp obj
  return temp;
}

const Date& Date::operator+=(int addDays) {
  for (int i = 0;  i < addDays; i++) {
    helpIncrement();
  }

  return *this;
}

// Stream operators
ostream& operator<<(ostream& output, const Date& d) {
  static char* monthName[13] = {
    "", "January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December" };

  output << d.day << monthName[d.month] << ' ' << d.year;

  return output;
}

// Others-------------------------------
bool Date::leapYear(int y) const {
  if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) {
    return true;
  }

  return false;
}

bool Date::endOfMonth(int d) const {
  if (month == 2 && leapYear(year)) {
    return d == 29;
  }

  return d == days[month];
}

// util func to increment date
void Date::helpIncrement() {
  // end of year
  if (endOfMonth(day) && month == 12) {
    day = 1;
    month = 1;
    ++year;
  } else if (endOfMonth(day)) { // end of month
    day = 1;
    ++month;
  } else { // not end of month
    ++day;
  }
}
