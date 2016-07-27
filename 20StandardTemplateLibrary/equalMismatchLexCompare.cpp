/* equalMismatchLexCompare.cpp */
// STL funcs equal, mismatch, lexicographical_compare
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

int main() {
  const int SIZE = 10;
  int a1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int a2[SIZE] = { 1, 2, 3, 4, 1000, 6, 7, 8, 9, 10 };
  std::vector<int> v1(a1, a1 + SIZE),
    v2(a1, a1 + SIZE),
    v3(a2, a2 + SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "v1: ";
  std::copy(v1.begin(), v1.end(), output);
  cout << "\nv2: ";
  std::copy(v2.begin(), v2.end(), output);
  cout << "\nv3: ";
  std::copy(v3.begin(), v3.end(), output);

  bool result = std::equal(v1.begin(), v1.end(), v2.begin());

  cout << "\n\nv1 " << (result ? "is" : "is not") << " equal to v2\n";

  result = std::equal(v1.begin(), v1.end(), v3.begin());
  cout << "\n\nv1 " << (result ? "is" : "is not") << " equal to v3\n";

  std::pair<std::vector<int>::iterator, std::vector<int>::iterator> location;
  location = std::mismatch(v1.begin(), v1.end(), v3.begin());

  cout << "There is a mismatch between v1 and v3 at location "
       << (location.first - v1.begin())
       << "; v1 contains " << *location.first
       << ", v3 contains " << *location.second << "\n\n";

  char c1[SIZE] = "HELLO",
    c2[SIZE] = "BYE BYE";

  result = std::lexicographical_compare(c1, c1 + SIZE, c2, c2 + SIZE);

  cout << c1 << (result ? " is less than " : " is greater than or equal to ")
       << c2 << endl;
  
  return 0;
}
