#include <iostream>
using std::cout;
using std::endl;

#include "List.h"


int main() {
  List<int> list;

  cout << "Inserting element 3 at front..." << endl;
  list.insertAtFront(3);
  cout << "list[0]: " << list[0] << endl;
  cout << "Inserting element 30 at front..." << endl;
  list.insertAtFront(30);
  cout << "list[0]: " << list[0] << endl;
  cout << "list[1]: " << list[1] << endl;
  return 0;
}
