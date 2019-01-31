/* time4.h */
// Time class with accessor functions; func defs in time4.cpp

#ifndef TIME4_H
#define TIME4_H

class Time {
 public:
  // Constructor
  Time(int = 0, int = 0, int = 0); //default constructor: hr, min, sec

  // Setters/Getters
  void setTime(int, int, int);
  int getHour();
  int &badSetHour(int);

 private:
  int hour, minute, second;
};

#endif
