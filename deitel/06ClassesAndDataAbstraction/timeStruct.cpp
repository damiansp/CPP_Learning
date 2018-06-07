/* Create a struct, set its members, and print it */
#include <iostream>
using std::cout;
using std::endl;

struct Time {
  int hour;
  int minute;
  int second;
};

void printMilitary(const Time &t) {
  cout << (t.hour < 10 ? "0" : "") << t.hour << ":"
       << (t.minute < 10 ? "0" : "") << t.minute;
}

void printStandard(const Time &t) {
  cout << ((t.hour == 0 || t.hour == 12) ? 12 : t.hour % 12) << ":"
       << (t.minute < 10 ? "0" : "") << t.minute << ":"
       << (t.second < 10 ? "0" : "") << t.second
       << (t.hour < 12 ? " A.M." : " P.M.");
}



int main() {
  Time dinnerTime;

  dinnerTime.hour = 18;
  dinnerTime.minute = 30;
  dinnerTime.second = 0;

  cout << "Dinner will be held at ";
  printMilitary(dinnerTime);
  cout << " (or ";
  printStandard(dinnerTime);
  cout << ")\n";
}
