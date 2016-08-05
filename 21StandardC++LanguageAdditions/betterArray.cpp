/* betterArray.cpp */
// Class Array member func defs
#include <cassert>
#include <iostream>
using std::cout;
using std::ostream;

#include "betterArray.hpp"

// Constr (default to size = 10)
Array::Array(int arraySize) {
  size = (arraySize > 0 ? arraySize : 10);
  cout << "Array constructor called for " << size << " elements\n";

  ptr = new int[size];
  assert(ptr != 0);

  for (int i = 0; i < size; i++) {
    ptr[i] = 0; //init
  }
}

// Destr
Array::~Array() { delete [] ptr; }

// Operator overlaod
ostream& operator<<(ostream& output, const Array& a) {
  for (int i = 0; i < a.size; i++) {
    output << a.ptr[i] << '\t';
  }

  return output;
}
