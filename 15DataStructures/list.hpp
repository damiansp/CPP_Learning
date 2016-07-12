/* list.hpp */
// Template List class def
#ifndef LIST_HPP
#define LIST_HPP

#include <cassert>
#include <iostream>
using std::cout;

#include "listNode.hpp"

template<class NODETYPE>
class List {
public:
  // Constr/Destr
  List();
  ~List();

  void insertAtFront(const NODETYPE&);
  void insertAtBack(const NODETYPE&);
  bool removeFromFront(NODETYPE&);
  bool removeFromBack(NODETYPE&);
  bool isEmpty() const;
  void print() const;

private:
  ListNode<NODETYPE>* firstPtr; // pointer to first node
  ListNode<NODETYPE>* lastPtr;  // pointer to last node

  // util func to allocate new node
  ListNode<NODETYPE>* getNewNode(const NODETYPE&);
};

// Constr
template<class NODETYPE>
List<NODETYPE>::List()
  : firstPtr(0), lastPtr(0) {}

// Destr
template<class NODETYPE>
List<NODETYPE>::~List() {
  if (!isEmpty()) {
    cout << "Destroying node ...\n";

    ListNode<NODETYPE>* currentPtr = firstPtr,
      *tempPtr;

    while (currentPtr != 0) { // delete remaining nodes
      tempPtr = currentPtr;
      cout << tempPtr -> data << '\n';
      currentPtr = currentPtr -> nextPtr;
      delete tempPtr;
    }
  }

  cout << "All nodes destroyed.\n\n";
}

// Insert a node at the front of the list
template<class NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE& value) {
  ListNode<NODETYPE>* newPtr = getNewNode(value);

  if (isEmpty()) {
    firstPtr = lastPtr = newPtr;
  } else {
    newPtr -> nextPtr = firstPtr;
    firstPtr = newPtr;
  }
}

// Insert node at back of list
template<class NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE& value) {
  ListNode<NODETYPE>* newPtr = getNewNode(value);

  if (isEmpty()) {
    firstPtr = lastPtr = newPtr;
  } else {
    lastPtr -> nextPtr = newPtr;
    lastPtr = newPtr;
  }
}

// Delete node from front of list
template<class NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE& value) {
  if (isEmpty()) {
    return false; // delete unsuccessful
  } else {
    ListNode<NODETYPE>* tempPtr = firstPtr;

    if (firstPtr == lastPtr) {
      firstPtr = lastPtr = 0;
    } else {
      firstPtr = firstPtr -> nextPtr;
    }

    value = tempPtr -> data; // data being removed
    delete tempPtr;
    return true; // delete successful
  }
}

// Delete node from back of list
template<class NODETYPE>
bool List<NODETYPE>::removeFromBack(NODETYPE& value) {
  if (isEmpty()) {
    return false; // delete unsuccessful
  } else {
    ListNode<NODETYPE>* tempPtr = lastPtr;

    if (firstPtr == lastPtr) {
      firstPtr = lastPtr = 0;
    } else {
      ListNode<NODETYPE>* currentPtr = firstPtr;
    
      while (currentPtr -> nextPtr != lastPtr) {
        currentPtr = currentPtr -> nextPtr;
      }

      lastPtr = currentPtr;
      currentPtr -> nextPtr = 0;
    }

    value = tempPtr -> data;
    delete tempPtr;
    return true; // delete successful
  }
}

// Is the list empty?
template<class NODETYPE>
bool List<NODETYPE>::isEmpty() const {
  return firstPtr == 0;
}

// Return a pointer to a newly allocated node
template<class NODETYPE>
ListNode<NODETYPE>* List<NODETYPE>::getNewNode(const NODETYPE& value) {
  ListNode<NODETYPE>* ptr = new ListNode<NODETYPE>(value);
  assert(ptr != 0);
  return ptr;
}

// Display list contents
template<class NODETYPE>
void List<NODETYPE>::print() const {
  if (isEmpty()) {
    cout << "The list is empty\n\n";
    return;
  }

  ListNode<NODETYPE>* currentPtr = firstPtr;

  cout << "The list is: ";

  while (currentPtr != 0) {
    cout << currentPtr -> data << ' ';
    currentPtr = currentPtr -> nextPtr;
  }

  cout << "\n\n";
}

#endif
