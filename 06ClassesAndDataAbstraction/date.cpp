/* date.cpp */
// Date class: demonstrates class objs assigned to each other using default
// memberwise copy
#include <iostream>
using std::cout;
using std::endl;

// Simple Date class
class Date {
public:
  // Default constructor
  Date(int = 1, int = 1, int = 1990); // month, day, year
  void print();
private:
  int month, day, year;
};

// Simple contructor w/o validation
Date::Date(int m, int d, int y) {
  month = m;
  day = d;
  year = y;
}

// Print Date as (m)m-(d)d-yyyy
void Date::print() {
  cout << month << '-' << day << "-" << year;
}


int main() {
  Date date1(11, 3, 1976),
    date2; // default construction

  cout << "date1: ";
  date1.print();
  cout << "\ndate2:: ";
  date2.print();

  date2 = date1;
  cout << "\n\nAfter default memberwise copy, date2: ";
  date2.print();
  cout << endl << endl;

  return 0;
}
