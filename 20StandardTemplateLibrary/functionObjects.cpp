/* functionObjects.cpp */
#include <algorithm>
#include <functional>
#include <iostream>
using std::cout;
using std::endl;

#include <numeric>
#include <vector>

// Binary func adds the square of its 2nd arg and the running total in the 1st
// arg and returns the sum
int sumSquares(int total, int val) {
  return total + val * val;
}

// Binary func class template defines an overloaded operator() that adds the
// square of its 2nd arg and the running total in the 1st arg and returns the
// sum
template<class T>
class SumSquaresClass : public std::binary_function<T, T, T> {
public:
  const T operator() (const T& total, const T& val) {
    return total + val * val;
  }
};



int main() {
  const int SIZE = 10;
  int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  std::vector<int> v(a1, a1 + SIZE);
  std::ostream_iterator<int> output(cout, " ");
  int result = 0;

  cout << "v: ";
  std::copy(v.begin(), v.end(), output);
  result = std::accumulate(v.begin(), v.end(), 0, sumSquares);
  cout << "\n\nSum of squares of elements in v using binary function"
       << "\nsumSquares: " << result;

  result = std::accumulate(v.begin(), v.end(), 0, SumSquaresClass<int>());
  cout << "\n\nSum of sqares of elements in v using binary function object "
       << "\nof type SumSquaresClass<int>: " << result << endl;
  
  return 0;
}
