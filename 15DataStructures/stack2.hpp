/* stack2.hpp */
// Def of Stack class composed of List objects
#ifndef STACK2_HPP
#define STACK2_HPP

#include "list.hpp"

template<class STACKTYPE>
class Stack {
public:
  // No Constr; List Constr initializes
  void push(const STACKTYPE& d) { s.insertAtFront(d); }
  bool pop(STACKTYPE& d) { return s.removeFromFront(d); }
  bool isStackEmpty() const { return s.isEmpty(); }
  void printStack() cosnt { s.print(); }
private:
  List<STACKTYPE> s;
};

#endif
