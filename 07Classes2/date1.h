/* date1.h */
// Date class declaration
// Member funcs in date1.cpp
#ifndef DATE1_H
#define DATE1_H

class Date {
 public:
  Date(int = 1, int = 1, int = 1900);
  ~Date();
  
  void print() const;

 private:
  int month, // 1 - 12
    day,     // 1 - 31
    year;    // any year

  // util to test day for a given month and year
  int checkDay(int);
};

#endif
