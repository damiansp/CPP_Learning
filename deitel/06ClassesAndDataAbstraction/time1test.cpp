#include <iostream>
using std::cout;
using std::endl;

#include "time1.h"


int main() {
  Time t;

  cout << "Initial time (military): ";
  t.printMilitary();
  cout << "\n(standard): ";
  t.printStandard();

  t.setTime(13, 27, 6);
  cout << "\n\nAfter setTime(...) (milit): ";
  t.printMilitary();
  cout << "\n(std): ";
  t.printStandard();
  cout << endl;
  
  return 0;
}
