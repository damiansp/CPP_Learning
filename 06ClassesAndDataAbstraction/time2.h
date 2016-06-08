/* time2.h */
// Time class; func defs in time2.cpp

#ifndef TIME2_H
#define TIME2_H

class Time {
 public:
  Time(int = 0, int = 0, int = 0); //default constructor: hr, min, sec
  void setTime(int, int, int);
  void printMilitary();
  void printStandard();

 private:
  int hour, minute, second;
};

#endif
