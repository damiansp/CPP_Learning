/* employee2.hpp */
// Abstact Employee base class
#ifndef EMPLOYEE2_HPP
#define EMPLOYEE2_HPP

class Employee {
public:
  // Constr/Destr
  Employee(const char*, const char*);
  ~Employee();

  // Acc
  const char* getFirstName() const;
  const char* getLastName() const;

  // Pure virtual func (make this an abstract class)
  virtual double earnings() const = 0;
  virtual void print() const;

private:
  char* firstName;
  char* lastName;
};

#endif
