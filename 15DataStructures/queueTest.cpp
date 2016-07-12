/* queueTest.cpp */
#include <iostream>
using std::endl;

#include "queue.hpp"

int main() {
  Queue<int> intQ;
  Queue<double> doubQ;
  int deQInt, i;
  double val = 1.1,
    deQDoub;

  cout << "Processing Queues" << endl;

  for (i = 0; i < 4; i++) {
    intQ.enqueue(i);
    intQ.printQueue();

    doubQ.enqueue(val);
    doubQ.printQueue();
    val += 1.1;
  }

  while (!intQ.isQueueEmpty()) {
    intQ.dequeue(deQInt);
    cout << deQInt << " dequeued" << endl;
    intQ.printQueue();
  }

  while (!doubQ.isQueueEmpty()) {
    doubQ.dequeue(deQDoub);
    cout << deQDoub << " dequeued" << endl;
    doubQ.printQueue();
  }
  
  return 0;
}
