/* time5test.cpp */
// Attempt to access a const obj w/ non-const member funcs
#include "time5.h"

int main() {
  Time wakeUp(6, 45, 0);
  const Time noon(12, 0, 0);
  //                      member func      obj
  wakeUp.setHour(18);     // non           non
  //noon.setHour(12);     // non           const <- not allowed
  wakeUp.getHour();       // const         non
  noon.getMinute();       // const         const
  noon.printMilitary();   // const         const
  //noon.printStandard(); // non           const <- not allowed

  return 0;
}
