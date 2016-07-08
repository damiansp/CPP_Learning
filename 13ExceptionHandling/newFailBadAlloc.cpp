/* newFailBadAlloc.cpp */
// Demo for new failures throwing bad_alloc when memory not allocated
#include <iostream>
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;

int main() {
  double* ptr[50];

  try {
    for (int i = 0; i < 50; i++) {
      ptr[i] = new double[5000000000000];
      cout << "Allocated 5,000,000,000,000 doubles in prt[" << i << "]\n";
    }
  } catch (bad_alloc e) {
    cout << "Exception occurred: " << e.what() << endl;
  }
  
  return 0;
}
