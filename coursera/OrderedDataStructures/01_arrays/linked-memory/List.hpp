#include "List.h"


template <typename T>
const T &List<T>::operator[](unsigned index) {
  ListNode *thru = head_; // Start a "thru" pointer to advance through list

  // Loop unitl end of list or index reached
  while (index > 0 && thru->next != nullptr) {
    thru = thru->next;
    index--;
  }
  return thru->data;
}


template <typename T>
void List<T>::insertAtFront(const T &data) {
  // Create new ListNode on heap
  ListNode *node = new ListNode(data);

  // Set new node's next pointer to current head of list
  node->next = head_;

  // Set List's head pointer to be the new node
  head_ = node;
}

template <typename T>
typename List<T>::ListNode *List<T>::_find(const T &data) {
  ListNode *thru = head_;
  while (thru != nullptr) {
    if (thru->data == data) { return thru; }
    thru = thru->next;
  }
  return nullptr;
}
