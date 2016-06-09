/* time3.h */
// Time class with accessor functions; func defs in time3.cpp

#ifndef TIME3_H
#define TIME3_H

class Time {
 public:
  // Constructor
  Time(int = 0, int = 0, int = 0); //default constructor: hr, min, sec

  // Setters/Getters
  void setTime(int, int, int);
  void setHour(int);
  void setMinute(int);
  void setSecond(int);
  int getHour();
  int getMinute();
  int getSecond();
  
  void printMilitary();
  void printStandard();

 private:
  int hour, minute, second;
};

#endif
