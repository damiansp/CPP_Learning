/* employee1.h */
// Employee class declaration
// Member funcs in employee1.cpp
#ifndef EMPLOYEE1_H
#define EMPLOYEE1_H

#include "date1.h"

class Employee {
 public:
  Employee(char *, char *, int, int, int, int, int, int);
  ~Employee();

  void print() const;

 private:
  char firstName[25];
  char lastName[25];
  const Date birthDate;
  const Date hireDate;
};

#endif
