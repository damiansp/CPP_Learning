/* string1.h */
// String class def
#ifndef STRING1_H
#define STRING1_H

#include <iostream>
using std::ostream;
using std::istream;

class String {
  friend ostream& operator<<(ostream&, const String&);
  friend istream& operator>>(istream&, String&);

 public:
  // Constructors-----------------------
  // Default
  String(const char* = "");
  // Copy
  String(const String&);
  // Destructor
  ~String();

  // Operator overloads-----------------
  const String& operator=(const String&);
  const String& operator+=(const String&);
  bool operator!() const;
  bool operator==(const String&) const;
  bool operator<(const String&) const;

  bool operator!=(const String& right) const {
    return !(*this == right);
  }

  bool operator>(const String& right) const {
    return right < *this;
  }

  bool operator<=(const String& right) const {
    return !(right < *this);
  }

  bool operator>=(const String& right) const {
    return !(*this < right);
  }

  char& operator[](int);
  const char& operator[](int) const;

  String operator()(int, int); // return a substring

  // Accessors--------------------------
  int getLength() const;


 private:
  int length;
  char* sPtr; // pointer to start of string

  void setString(const char*); // util func
};

#endif
