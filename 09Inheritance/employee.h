/* employee.h */
// Employee class def
#ifndef EMPLOY_H
#define EMPLOY_H

class Employee {
 public:
  // Constructor
  Employee(const char*, const char*);
  ~Employee();

  // Print
  void print() const;

 private:
  char* firstName;
  char* lastName;
};

#endif
