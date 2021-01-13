#include <cstdio>


int main() {
  int arr[] = {1, 2, 3, 4};

  printf("Element 3 is: %d.\n", arr[2]);
  arr[2] = 100;
  printf("And now it's changed to: %d.\n", arr[2]);
  return 0;
}
