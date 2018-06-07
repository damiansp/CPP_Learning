/* array1.h */
// Simple Array class for ints
#ifndef ARRAY1_H
#define ARRAY1_H

#include <iostream>
using std::ostream;
using std::istream;

class Array {
  friend ostream& operator<<(ostream&, const Array&);
  friend istream& operator>>(istream&, Array&);

 public:
  // Constructors/Destructor
  Array(int = 10);     // default
  Array(const Array&); // copy
  ~Array();
  // Accessors
  int getSize() const;
  static int getArrayCount();

  // Operator overloads
  const Array& operator=(const Array&);
  bool operator==(const Array&) const;
  bool operator!=(const Array& right) const {
    return !(*this == right); 
  }

  int& operator[](int);
  const int& operator[](int) const;

 private:
  int size;
  int* ptr;
  static int arrayCount;
};

#endif
