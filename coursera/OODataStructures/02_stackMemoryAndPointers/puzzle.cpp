#include <iostream>
using std::cout;
using std::endl;


int main() {
  int i = 2,
    j = 4,
    k = 8;
  int *p = &i,
    *q = &j,
    *r = &k;

  k = i;
  cout << i << j << k << *p << *q << *r << endl;
  //      2    4    2     2     4     2
  p = q;
  cout << i << j << k << *p << *q << *r << endl;
  //      2    4    2     4     4     2
  *q = *r;
  cout << i << j << k << *p << *q << *r << endl;
  //      2    2    2     2     2     2


  int *x = new int; // heap
  int &y = *x;
  y = 4;

  cout << &x << endl; // some stack addr
  cout << x << endl;  // some heap addr
  cout << *x << endl; // 4

  cout << &y << endl; // same heap addr as above
  cout << y << endl;  // 4
  //cout << *y << endl; /* compilation error */


  int *a, *b;
  a = new int;
  b = a;
  *b = 8;
    
  cout << *a << endl; // 8

  b = new int;
  *b = 9;

  cout << *a << endl; // 8
  cout << *b << endl; // 9


  int *g;
  int size = 3;
  g = new int[size];

  for (int i = 0; i < size; i++) { g[i] = i + 3; }

  delete[] g;
  

  return 0;
}
