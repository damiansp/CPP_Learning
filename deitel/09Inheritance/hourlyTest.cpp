/* hourlyTest.cpp */
// Overriding a base-class memeber func in derived class
#include "hourly.h"

int main() {
  HourlyWorker h("Bob", "Smith", 40.0, 10.00);
  h.print();

  return 0;
}
