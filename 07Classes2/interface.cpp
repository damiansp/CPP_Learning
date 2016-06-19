/* interface.cpp */
// Interface class def
#include "implementation.h"
#include "interface.h"

// Constructor
Interface::Interface(int v)
  : ptr (new Implementation(v)) {} // uses Implementation's constructor

// Destructor
Interface::~Interface() { delete ptr; }


// Accessors
// Call Implementation's setValue func
void Interface::setValue(int v) { ptr -> setValue(v); }

// Call Implementation's getValue func
int Interface::getValue() const { return ptr -> getValue(); }

