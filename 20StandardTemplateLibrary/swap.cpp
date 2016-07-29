/* swap.cpp */
// STL swap, iter_swap, and swap_ranges
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const int SIZE = 10;
  int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  std::ostream_iterator<int> output(cout, " ");

  cout << "a:\n";
  std::copy(a, a + SIZE, output);

  // Swap elements in a
  std::swap(a[0], a[1]);
  cout << "\na after swapping elements 0 and 1:\n";
  std::copy(a, a + SIZE, output);

  std::iter_swap(&a[0], &a[1]);
  cout << "\na after iter swap of 0 and 1:\n";
  std::copy(a, a + SIZE, output);

  // Swap ranges
  std::swap_ranges(a, a + 4, a + 4);
  cout << "\na after swapping the first 4 elements:\n";
  std::copy(a, a + SIZE, output);
  cout << endl;
  
  return 0;
}
