/* vectorManip.cpp */
// STL vector class template; element manipulation funcs
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

int main() {
  const int SIZE = 6;
  int a[SIZE] = { 1, 2, 3, 4, 5, 6 };
  std::vector<int> v(a, a + SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "Vector v contains: ";
  std::copy(v.begin(), v.end(), output);

  cout << "\nFirst element of v: " << v.front()
       << "\nLast element: " << v.back();

  v[0] = 7;
  v.at(2) = 10;
  v.insert(v.begin() + 1, 22);

  cout << "\nContents of vector v after changes: ";
  std::copy(v.begin(), v.end(), output);

  try {
    v.at(100) = 777; // out of range
  } catch (std::out_of_range e) {
    cout << "\nException: " << e.what();
  }

  v.erase(v.begin());
  cout << "\nContents of v after erase: ";
  std::copy(v.begin(), v.end(), output);
  v.erase(v.begin(), v.end());
  cout << "\nAfter erase, v is"
       << (v.empty() ? " " : " not ") << "empty";

  v.insert(v.begin(), a, a + SIZE);
  cout << "\nContents of v before clear: ";
  std::copy(v.begin(), v.end(), output);
  v.clear(); // calls erase to empty a collection

  cout << "\nAfter clear, v is"
       << (v.empty() ? "" : " not") << " empty";

  cout << endl;

  return 0;
}
