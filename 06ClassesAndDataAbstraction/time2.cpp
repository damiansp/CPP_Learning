/* time2.cpp */
// Member func decs for Time class
#include <iostream>
using std::cout;

#include "time2.h"

// Setter -- Set a new Time val using military hours; validate
void Time::setTime(int h, int m, int s) {
  hour   = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

// Constructor -- defualts to 0, 0, 0
Time::Time(int hr, int min, int sec) {
  setTime(hr, min, sec);
}

// Print Time in milit format
void Time::printMilitary() {
  cout << (hour   < 10 ? "0" : "") << hour << ":"
       << (minute < 10 ? "0" : "") << minute;
}

// Print Time in std format
void Time::printStandard() {
  cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
       << (minute < 10 ? "0" : "") << minute << ":"
       << (second < 10 ? "0" : "") << second
       << (hour < 12 ? " a.m." : " p.m.");
}
