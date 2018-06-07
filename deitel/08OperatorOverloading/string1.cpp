/* string1.cpp */
// Member func defs for String class
#include <cassert>
#include <cstring>

#include <iomanip>
using std::setw;

#include <iostream>
using std::cout;
using std::endl;

#include "string1.h"

// Constructors-------------------------
// Conversion constructor (Convert char* to String)
String::String(const char* s) : length(strlen(s)) {
  cout << "Conversion constructor: " << s << '\n';
  setString(s); // call util func
}

// Copy constructor
String::String(const String& copy) : length(copy.length) {
  cout << "Copy constructor: " << copy.sPtr << '\n';
  setString(copy.sPtr); // call util func
}

// Destructor
String::~String() {
  cout << "Destructor: " << sPtr << '\n';
  delete [] sPtr;
}


// Operator overloads-------------------
// Assignment (avoid self-assignment)
const String& String::operator=(const String& right) {
  cout << "operator= called\n";

  // Avoid self-assignment
  if (&right != this) {
    delete [] sPtr; // prevent memory leak (setString will allocate new below)
    length = right.length;
    setString(right.sPtr);
  } else {
    cout << "Attempted assignment of String to itself\n";
  }

  return *this;
}

// Concatenate with this
const String& String::operator+=(const String& right) {
  char* tempPtr = sPtr;  // hold to be able to delete
  length += right.length;
  sPtr = new char[length + 1];
  assert(sPtr != 0);
  strcpy(sPtr, tempPtr);    // left part of new String
  strcat(sPtr, right.sPtr); // right part
  delete [] tempPtr;        // reclaim old space

  return *this;
}

// Is String empty?
bool String::operator!() const { return length == 0; }

// Equality/Inequalities
bool String::operator==(const String& right) const {
  return strcmp(sPtr, right.sPtr) == 0;
}

bool String::operator<(const String& right) const {
  return strcmp(sPtr, right.sPtr) < 0;
}

// Indexing (lvalue)
char& String::operator[](int index) {
  // index in range?
  assert(index >= 0 && index < length);

  return sPtr[index]; // creates lvalue
}

// (rvalue)
const char& String::operator[](int index) const {
  // index in range?
  assert(index >= 0 && index < length);

  return sPtr[index];  // creates rvalue
}

// Return a substring starting at index and of length subLength
String String::operator()(int index, int subLength) {
  // index in range? subLength non-negative?
  assert(index >= 0 && index < length && subLength > 0);

  int len; // length of substring

  if ((subLength == 0) || (index + subLength > length)) {
    len = length - index;
  } else {
    len = subLength;
  }

  // Allocate temp array for substring and terminating '\0'
  char* tempPtr = new char[len + 1];
  assert(tempPtr != 0);

  // Copy substring into char array and terminate string
  strncpy(tempPtr, &sPtr[index], len);
  tempPtr[len] = '\0';

  // Create temp String obj containing substring
  String tempString(tempPtr);
  delete [] tempPtr;

  return tempString;
}

// Stream operators (friend funcs)
ostream& operator<<(ostream& output, const String& s) {
  output << s.sPtr;
  return output;
}

istream& operator>>(istream& input, String& s) {
  char temp[100];  // buffer to store input

  input >> setw(100) >> temp;
  s = temp;

  return input;
}


// Accessors----------------------------
int String::getLength() const { return length; }

// util func called by constructors and assignment operators
void String::setString(const char* string2) {
  sPtr = new char[length + 1]; // allocate memory
  assert(sPtr != 0);
  strcpy(sPtr, string2);
}

