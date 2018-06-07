/* time4.cpp */
// Member func decs for Time class
#include "time4.h"

void Time::setTime(int h, int m, int s) {
  hour   = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

// Getters
int Time::getHour() {
  return hour;
}



// Constructor -- defaults to 0, 0, 0
Time::Time(int hr, int min, int sec) {
  setTime(hr, min, sec);
}



// BAD PRACTICE: Return ref to private data member
int &Time::badSetHour(int h) {
  hour = (h >= 0 && h < 24) ? h : 0;
  return hour; // DANGEROUS ref return
}
