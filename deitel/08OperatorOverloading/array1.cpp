/* array1.cpp */
// Member func defs for class Array
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

#include <cstdlib>
#include <cassert>
#include "array1.h"

// Init static data member
int Array::arrayCount = 0;

// Constructors-------------------------
// Default
Array::Array(int arraySize) {
  size = (arraySize > 0 ? arraySize : 10);
  ptr = new int[size]; // allocate space for array
  assert(ptr != 0);
  ++arrayCount;

  // init array
  for (int i = 0; i < size; i++) {
    ptr[i] = 0; 
  }
}

// Copy constructor; must receive ref to prevent infinite recursion
Array::Array(const Array& init) : size(init.size) {
  ptr = new int[size];
  assert(ptr != 0);
  ++arrayCount;

  // copy init into object
  for (int i = 0; i < size; i++) {
    ptr[i] = init.ptr[i];
  }
}

// Destuctor
Array::~Array() {
  delete [] ptr;
  --arrayCount;
}



// Operator overloads-------------------
// Assignment (const return avoids: (a1 = a2) = a3)
const Array& Array::operator=(const Array& right) {
  // chce for self assignment
  if (&right != this) {
    // For arrays of diff sizes, free orig left side array, then allocate new
    // left side array
    if (size != right.size) {
      delete [] ptr;
      size = right.size;
      ptr = new int[size];
      assert(ptr != 0);
    }

    // copy array into object
    for (int i = 0; i < size; i++) {
      ptr[i] = right.ptr[i];
    }
  }

  return *this; // enables x = y = z;
}

// Equality
bool Array::operator==(const Array& right) const {
  if (size != right.size) {
    return false;
  }

  for (int i = 0; i < size; i++) {
    if (ptr[i] != ptr[i]) {
      return false;
    }
  }

  return true;
}

// Subscript/Indexing
// for non-const Arrays, ref return creates an lvalue
int& Array::operator[](int subscript) {
  // check for out-of-range error
  assert(subscript >= 0 && subscript < size);
  return ptr[subscript];
}

// for const Arrays const ref return creates an rvalue
const int& Array::operator[](int subscript) const {
  // check for out-of-range error
  assert(subscript >= 0 && subscript < size);
  return ptr[subscript];
}

// Stream >>
istream& operator>>(istream& input, Array& a) {
  for (int i = 0; i < a.size; i++) {
    input >> a.ptr[i];
  }

  return input;
}

// Stream <<
ostream& operator<<(ostream& output, const Array& a) {
  int i;

  for (i = 0; i < a.size; i++) {
    output << setw(12) << a.ptr[i]; //

    // output 4 numbers per row
    if ((i + 1) % 4 == 0) {
      output << endl;
    }
  }

  if (i % 4 != 0) {
    output << endl;
  }

  return output; // enables cout << x << y;
}


// Accessors----------------------------
int Array::getSize() const { return size; }
int Array::getArrayCount() { return arrayCount; } // static funcs never const


