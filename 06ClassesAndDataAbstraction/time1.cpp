// Member functions for Time class
#include <iostream>
using std::cout;

#include "time1.h"

// Constructor
Time::Time() {
  hour = minute = second = 0;
}

// Setter
void Time::setTime(int h, int m, int s) {
  // validate and set
  hour   = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

// print Time in milit format
void Time::printMilitary() {
  cout << (hour < 10 ? "0" : "") << hour << ":"
       << (minute < 10 ? "0" : "") << minute;
}

// Standard format
void Time::printStandard() {
  cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
       << (minute < 10 ? "0" : "") << minute << ":"
       << (second < 10 ? "0" : "") << second
       << (hour < 12 ? " AM" : " PM");
}
