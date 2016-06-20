/* bell.cpp */
// Member funcs for class Bell
#include <iostream>
using std::cout;
using std::endl;

#include "bell.h"

// Constructor
Bell::Bell() { cout << "bell created" << endl; }

// Destructor
Bell::~Bell() { cout << "bell destroyed" << endl; }


void Bell::ringBell() const { cout << "elevator rings its bell" << endl; }
