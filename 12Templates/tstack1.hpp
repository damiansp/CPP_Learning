/* tstack1.hpp */
// Stack class template
#ifndef TSTACK1_H
#define TSTACK1_H

template<class T>
class Stack {
public:
  // Constr -- defaults to size 10
  Stack(int = 10);
  ~Stack() { delete [] stackPtr; }

  bool push(const T&);
  bool pop(T&);
  
private:
  int size,
    top; // location of top element
  T* stackPtr;

  // util
  bool isEmpty() const { return top == -1; }
  bool isFull() const { return top == size - 1; }
};



// Func Defs--------------------------------------
// Constr
template<class T>
Stack<T>::Stack(int s) {
  size = s > 0 ? s : 10;
  top = -1;
  // Allocate space for elements
  stackPtr = new T[size];
}

// Push element onto stack; return 1 if successful, else 0
template<class T>
bool Stack<T>::push(const T& pushValue) {
  if (!isFull()) {
    // Place element on top of stack
    stackPtr[++top] = pushValue;
    return true;
  }

  return false;
}

// Pop
template<class T>
bool Stack<T>::pop(T& popValue) {
  if (!isEmpty()) {
    // remove item from top of stack
    popValue = stackPtr[top--];
    return true;
  }

  return false; // unsuccessful attempt
}
  
#endif
