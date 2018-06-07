/* Time class */
#include <iostream>
using std::cout;
using std::endl;

class Time {
public:
  Time();
  void setTime(int, int, int);
  void printMilitary();
  void printStandard();
private:
  int hour, minute, second;
};

// Time constructor initialies all data to 0
Time::Time() {
  hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s) {
  hour   = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printMilitary() {
  cout << (hour < 10 ? "0" : "") << hour << ":"
       << (minute < 10 ? "0" : "") << minute;
}

void Time::printStandard() {
  cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
       << (minute < 10 ? "0" : "") << minute << ":"
       << (second < 10 ? "0" : "") << second
       << (hour < 12 ? " AM" : " PM");
}



int main() {
  Time t;

  cout << "t.printMilitary()\n> ";
  t.printMilitary();
  cout << "\nt.printStandard()\n> ";
  t.printStandard();

  // Change time
  t.setTime(13, 27, 6);
  cout << "\n\nt.printMilitary()\n> ";
  t.printMilitary();
  cout << "\nt.printStandard()\n> ";
  t.printStandard();

  // Change to invalid time
  t.setTime(99, 99, 99);
  cout << "\n\nt.printMilitary()\n> ";
  t.printMilitary();
  cout << "\nt.printStandard()\n> ";
  t.printStandard();
  cout << endl;
  
  return 0;
}
