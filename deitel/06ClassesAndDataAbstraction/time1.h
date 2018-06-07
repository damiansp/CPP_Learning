// Time class def; functions defined in time1.cpp

// Prevent multiple inclusions of header file
#ifndef TIME1_H
#define TIME1_H

class Time {
 public:
  // Constructor
  Time();

  // Setter
  void setTime(int, int, int); // hour, min, sec

  void printMilitary();
  void printStandard();

 private:
  int hour;
  int minute;
  int second;
};

#endif
