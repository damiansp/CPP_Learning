/* employee2.h */
// Employee class
#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

class Employee {
 public:
  // Constructor / Destuctor
  Employee(const char*, const char*);
  ~Employee();

  // Accessors
  const char *getFirstName() const;
  const char *getLastName() const;
  // Static Accessor
  static int getCount(); // # of objects instantiated
  
 private:
  char *firstName, *lastName;
  static int count;
};

#endif
