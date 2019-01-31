/* time6test.cpp */
#include <iostream>
using std::cout;
using std::endl;

#include "time6.h"

int main() {
  Time t;

  t.setHour(18).setMinute(30).setSecond(22);
  cout << "Military time: ";
  t.printMilitary();
  cout << "\nStandard: ";
  t.printStandard();

  cout << "\n\nNew Standard Time: ";
  t.setTime(20, 20, 20).printStandard();
  cout << endl;
}
