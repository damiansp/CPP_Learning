/* clock.cpp */
// Class Clock member func defs
#include <iostream>
using std::cout;
using std::endl;

#include "clock.h"

// Constructor
Clock::Clock()
  : time(0) {

  cout << "clock created" << endl;
}

// Destructor
Clock::~Clock() {
  cout << "clock destroyed" << endl;
}

// Accessor
int Clock::getTime() const { return time; }


void Clock::tick() { time++; }

