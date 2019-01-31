/* listTest.cpp */
#include <iostream>
using std::cin;
using std::endl;

#include "list.hpp"

void instructions() {
  cout << "Enter one of the following:\n"
       << "  1: insert at beginning of list\n"
       << "  2: insert at end of list\n"
       << "  3: delete from beginning of list\n"
       << "  4: delete from end of list\n"
       << "  5: end list processing\n";
}

// Test an list of type T
template<class T>
void testList(List<T>& listObject, const char* type) {
  cout << "Testing a List of " << type << " values\n";

  instructions();
  int choice;
  T value;

  do {
    cout << "? ";
    cin >> choice;

    switch (choice) {
    case 1:
      cout << "Enter "  << type << ": ";
      cin >> value;
      listObject.insertAtFront(value);
      listObject.print(); break;
    case 2:
      cout << "Enter " << type << ": ";
      cin >> value;
      listObject.insertAtBack(value);
      listObject.print(); break;
    case 3:
      if (listObject.removeFromFront(value)) {
        cout << value << " removed from list\n";
      }

      listObject.print(); break;
    case 4:
      if (listObject.removeFromBack(value)) {
        cout << value << " removed from list\n";
      }

      listObject.print(); break;
    }
  } while (choice != 5);

  cout << "End list test\n\n";
}



int main() {
  List<int> intList;
  List<double> doubleList;

  testList(intList, "integer");
  testList(doubleList, "double");
  
  return 0;
}
