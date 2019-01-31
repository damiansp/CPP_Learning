#include <iostream>
using std::cout;
using std::endl;

template <class A>
A sum(A n1, A n2, A n3) {
  return n1 + n2 + n3;
}

template <class A>
A product(A n1, A n2, A n3) {
  return n1 * n2 * n3;
}


void printResults(int x, int y) {
  cout << "The sum is " << x + y << '\n';
}

double cube(const double s) {
  return s * s * s;
}

int cube(const int s) {
  return s * s * s;
} 


int main() {
  int i1 = 1,
    i2 = 2,
    i3 = 3;
  double d1 = 1.1,
    d2 = 2.22,
    d3 = 3.333;
  char c1 = 'a',
    c2 = 'e',
    c3 = 'i';

  cout << "sum(ints): " << sum(i1, i2, i3) << endl
       << "product(ints): " << product(i1, i2, i3) << endl
       << "sum(doubles): " << sum(d1, d2, d3) << endl
       << "productu(doubles): " << product(d1, d2, d3) << endl
       << "sum(chars): " << sum(c1, c2, c3) << endl
       << "printRes(ints): " << endl;
  printResults(i1, i2);
  cout << "cube(ds): " << cube(d2) << endl
       << "cube(is): " << cube(i2) << endl;
}
