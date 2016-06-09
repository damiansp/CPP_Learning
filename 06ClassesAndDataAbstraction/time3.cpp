/* time3.cpp */
// Member func decs for Time class
#include <iostream>
using std::cout;

#include "time3.h"

// Setters
void Time::setHour(int h) {
  hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m) {
  minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s) {
  second = (s >= 0 && s < 60) ? s : 0;
}

void Time::setTime(int h, int m, int s) {
  setHour(h);
  setMinute(m);
  setSecond(s);
}

// Getters
int Time::getHour() {
  return hour;
}

int Time::getMinute() {
  return minute;
}

int Time::getSecond() {
  return second;
}


// Constructor -- defaults to 0, 0, 0
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
