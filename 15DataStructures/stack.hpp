/* stack.hpp */
// Stack class template def
#ifndef STACK_HPP
#define STACK_HPP

#include "list.hpp"

template<class STACKTYPE>
class Stack : private List<STACKTYPE> {
public:
  void push(const STACKTYPE& d) { List<STACKTYPE>::insertAtFront(d); }
  bool pop(STACKTYPE& d) { return List<STACKTYPE>::removeFromFront(d); }
  bool isStackEmpty() const { return List<STACKTYPE>::isEmpty(); }
  void printStack() const { List<STACKTYPE>::print(); }
};

#endif
