/* light.cpp */
// Class Light member func defs
#include <iostream>
using std::cout;
using std::endl;

#include "light.h"

// Constructor
Light::Light(const char *string)
  : on(false), name(string) {

  cout << name << " light created" << endl;
}

// Destructor
Light::~Light() { cout << name << " ligth destroyed" << endl; }


void Light::turnOn() {
  on = true;
  cout << name << " turns its light on" << endl;
}

void Light::turnOff() {
  on = false;
  cout << name << " turns its light off" << endl;
}
