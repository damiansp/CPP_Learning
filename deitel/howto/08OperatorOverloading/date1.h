/* date1.h */
// Date class def

#ifndef DATE1_H
#define DATE1_H

#include <iostream>
using std::ostream;

class Date {
  friend ostream& operator<<(ostream&, const Date&);

 public:
  // Constructor
  Date(int m = 1, int d = 1, int y = 1900);

  // Accessors
  void setDate(int, int, int);

  // Operator overloads
  Date& operator++();   // pre-increment
  Date operator++(int); // post-
  const Date& operator+=(int);

  // Others-----------------------------
  bool leapYear(int) const;
  bool endOfMonth(int) const;

 private:
  int month,
    day,
    year;

  static const int days[]; // array of days per month
  void helpIncrement();    // util func
};

#endif
