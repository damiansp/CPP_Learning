/* queue.hpp */
// Queue class temp def
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "list.hpp"

template<class QTYPE>
class Queue : private List<QTYPE> {
public:
  void enqueue(const QTYPE& d) { List<QTYPE>::insertAtBack(d); }
  bool dequeue(QTYPE& d) { return List<QTYPE>::removeFromFront(d); }
  bool isQueueEmpty() const { return List<QTYPE>::isEmpty(); }
  void printQueue() const { List<QTYPE>::print(); }
};

#endif
