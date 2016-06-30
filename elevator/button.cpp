/* button.cpp */
// Button class member funcs
#include <iostream>
using std::cout;
using std::endl;

#include "button.hpp"

// Constr
Button::Button(Elevator& elevatorHandle)
  : elevatorRef(elevatorHandle), pressed(false) {
  cout << "button created" << endl;
}

// Destr
Button::~Button() {
  cout << "button destroyed" << endl;
}



// Press button
void Button::pressButton() { pressed = true; }

// Reset button
void Button::resetButton() { pressed = false; }
