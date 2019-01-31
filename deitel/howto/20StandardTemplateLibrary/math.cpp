/* math.cpp */
// STL Mathematial algorithms
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <numeric>
#include <vector>

bool moreThan9(int x) { return x > 9; }
void outputSquare(int x) { cout << x * x << ' '; }
int calculateCube(int x) { return x * x * x; }

int main() {
  const int SIZE = 10;
  int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int a2[] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
  std::vector<int> v(a1, a1 + SIZE),
    v2(a2, a2 + SIZE),
    cubes(SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "v: ";
  std::copy(v.begin(), v.end(), output);

  // Random shuffle
  std::random_shuffle(v.begin(), v.end());
  cout << "\nv after random_shuffle():\n";
  std::copy(v.begin(), v.end(), output);

  cout << "\nv2: ";
  std::copy(v2.begin(), v2.end(), output);

  // Count no. of 8s in v2
  int result = std::count(v2.begin(), v2.end(), 8);
  cout << "\nNumber of elements matching 8: " << result;

  // Count no > 9
  result = std::count_if(v2.begin(), v2.end(), moreThan9);
  cout << "\nNumber of elements > 9: " << result;

  // Min, max
  cout << "\n\nMin and max in v2:\nmin: "
       << *(std::min_element(v2.begin(), v2.end()))
       << "\nmax: " << *(std::max_element(v2.begin(), v2.end()));

  // Length (n)
  cout << "\n\nTotal number of elements in v: "
       << std::accumulate(v.begin(), v.end(), 0);

  // Operate on all elements:
  cout << "\n\nv^2: ";
  std::for_each(v.begin(), v.end(), outputSquare);
  std::transform(v.begin(), v.end(), cubes.begin(), calculateCube);
  cout << "\n\ncubes (= v^3): ";
  std::copy(cubes.begin(), cubes.end(), output);
  cout << endl;
  
  return 0;
}
