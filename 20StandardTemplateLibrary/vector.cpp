/* vector.cpp */
// STL vector class template example
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>


template <class T>
void printVector(const std::vector<T>& vec);

int main() {
  const int SIZE = 6;
  int a[SIZE] = { 1, 2, 3, 4, 5, 6 };
  std::vector<int> v;

  cout << "The initial size of v is: " << v.size()
       << "\nThe initial capacity of v is: " << v.capacity();

  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  cout << "\nThe size of v is: " << v.size()
       << "\nThe capacity of v is: " << v.capacity()
       << "\n\nContents of array a using pointer notation: ";

  for (int* ptr = a; ptr != a + SIZE; ++ptr) {
    cout << *ptr << ' ';
  }

  cout << "\nContents of vector v using iterator notation: ";
  printVector(v);

  cout << "\nReversed contents of vector v: ";
  std::vector<int>::reverse_iterator p2;

  for (p2 = v.rbegin(); p2 != v.rend(); ++p2) {
    cout << *p2 << ' ';
  }

  cout << endl;

  return 0;
}


template <class T>
void printVector(const std::vector<T>& vec) {
  std::vector<T>::const_iterator p1;

  for (p1 = vec.begin(); p1 != vec.end(); p1++) {
    cout << *p1 << ' ';
  }
}


