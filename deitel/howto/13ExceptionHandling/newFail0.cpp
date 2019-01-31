/* newFail0.cpp */
// Demo for compilers returning 0 for new when memory not allocated
#include <iostream>
using std::cout;

int main() {
  double* ptr[50];

  for (int i = 0; i < 50; i++) {
    ptr[i] = new double[5000000000000];

    if (ptr[i] == 0) { // new failed to allocate memory
      cout << "Memory allocation failed for ptr [" << i << "]\n";
      break;
    } else {
      cout << "Allocated 5,000,000,000,000 doubles in ptr[" << i << "]\n";
    }
  }

  return 0;
}
