/* list.cpp */
// STL list class
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <list>

template <class T>
void printList(const std::list<T>& listRef) {
  if (listRef.empty()) {
    cout << "List is empty";
  } else {
    std::ostream_iterator<T> output(cout, " ");
    std::copy(listRef.begin(), listRef.end(), output);
  }
}



int main() {
  const int SIZE = 4;
  int a[SIZE] = { 2, 4, 6, 8 };
  std::list<int> values, otherValues;

  values.push_front(1);
  values.push_front(2);
  values.push_back(4);
  values.push_back(3);

  cout << "values contains: ";
  printList(values);
  values.sort();
  cout << "\nvalues after sorting: ";
  printList(values);

  otherValues.insert(otherValues.begin(), a, a + SIZE);
  cout << "\notherValues contains: ";
  values.splice(values.end(), otherValues);
  cout << "\nAfter splice, values contains: ";
  printList(values);

  values.sort();
  cout << "\nvalues contains: ";
  printList(values);
  otherValues.insert(otherValues.begin(), a, a + SIZE);
  otherValues.sort();
  cout << "\notherValues contains: ";
  printList(otherValues);
  values.merge(otherValues);
  cout << "\nAfter merge:\n values contains: ";
  printList(values);
  cout << "\n other values contains: ";
  printList(otherValues);

  values.pop_front();
  values.pop_back();

  cout << "\nAfter pop_front() and pop_back(), values contains:\n";
  printList(values);

  values.unique();
  cout << "\nAfter unique(), values contains: ";
  printList(values);

  values.swap(otherValues);
  cout << "\nAfter swap()\nvalues: ";
  printList(values);
  cout << "\notherValues: ";
  printList(otherValues);

  values.assign(otherValues.begin(), otherValues.end());
  cout << "\nAfer assign(), values: ";
  printList(values);

  values.merge(otherValues);
  cout << "\nvalues: ";
  printList(values);
  values.remove(4);
  cout << "\nAfer remove(4), values: ";
  printList(values);
  cout << endl;
  
  return 0;
}
