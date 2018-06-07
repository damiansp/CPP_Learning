/* time5.h */
// Time class declaration
// Member funcs in timep5.cpp
#ifndef TIME5_H
#define TIME5_H

class Time {
 public:
  // Constructor (hr, min, sec: defaults to 00:00:00)
  Time(int = 0, int = 0, int = 0);

  // Accessors
  void setTime(int, int, int);
  void setHour(int);
  void setMinute(int);
  void setSecond(int);

  int getHour() const;
  int getMinute() const;
  int getSecond() const;

  // Print funcs
  void printMilitary() const;
  void printStandard();

 private:
  int hour, minute, second;
};

#endif
