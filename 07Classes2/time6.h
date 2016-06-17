/* time6.h */
// Cascading member func calls
// Time class declaration; member funcs in time6.cpp
#ifndef TIME6_H
#define TIME6_H

class Time {
 public:
  // Constructor; defaults to 00:00:00
  Time(int = 0, int = 0, int = 0);

  // Accessors
  Time &setHour(int);
  Time &setMinute(int);
  Time &setSecond(int);
  Time &setTime(int, int, int); // set h, m, s

  int getHour() const;
  int getMinute() const;
  int getSecond() const;

  // Print
  void printMilitary() const;
  void printStandard() const;

 private:
  int hour, minute, second;
};

#endif
