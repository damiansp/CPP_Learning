/* array.hpp */
// Simple Array Class for ints
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
using std::ostream;

class Array {
  friend ostream& operator<<(ostream&, const Array&);

public:
  // Constr/Destr
  Array(int = 10); // default/conversion constr
  ~Array();

private:
  int size;
  int* ptr; // pointer to first elem
};

#endif
