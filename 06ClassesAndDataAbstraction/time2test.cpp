/* time2test.cpp */
// Test the Time class (time2.h, time2.cpp)
#include <iostream>
using std::cout;
using std::endl;

#include "time2.h"

int main() {
  Time t1,          // default settings (all 0)
    t2(2),          // set hour only
    t3(21, 34),     // set h, m
    t4(12, 25, 42), // set all
    t5(27, 74, 99); // invalid values

  cout << "t1 (default):\n";
  t1.printMilitary();
  cout << "\t";
  t1.printStandard();
  cout << "\n\n";
  
  cout << "t2(2):\n";
  t2.printMilitary();
  cout << "\t";
  t2.printStandard();
  cout << "\n\n";
  
  cout << "t3(21, 34):\n";
  t3.printMilitary();
  cout << "\t";
  t3.printStandard();
  cout << "\n\n";
  
  cout << "t4(12, 25, 42):\n";
  t4.printMilitary();
  cout << "\t";
  t4.printStandard();
  cout << "\n\n";
  
  cout << "t5(27, 74, 99):\n";
  t5.printMilitary();
  cout << "\t";
  t5.printStandard();
  cout << "\n\n";
    
  return 0;
}
