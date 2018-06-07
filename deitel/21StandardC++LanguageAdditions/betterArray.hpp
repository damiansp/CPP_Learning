/* betterArray.hpp */
// Simple class for an array of ints
#ifndef BETTER_ARRAY_HPP
#define BETTER_ARRAY_HPP

#include <iostream>
using std::ostream;

class Array {
  friend ostream& operator<<(ostream&, const Array&);

public:
  // Constr/Destr
  explicit Array(int = 10);
  ~Array();

private:
  int size;
  int* ptr; // point to first elem
};

#endif
