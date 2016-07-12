/* stack.hpp */
// Stack class template def
#ifndef STACK_HPP
#define STACK_HPP

#include "list.hpp"

template<class STACKTYPE>
class Stack : private List<STACKTYPE> {
public:
  void push(const STACKTYPE& d) { insertAtFront(d); }
  bool pop(STACKTYPE& d) { return removeFromFront(d); }
  bool isStackEmpty() const { return isEmpty(); }
  void printStack() const { print(); }
};

#endif
