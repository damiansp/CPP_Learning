#include <cstdio>


int main() {
  int gettysburg{};

  printf("gettysburg: %d\n", gettysburg);
  int *gettysburgAddress = &gettysburg;

  printf("&gettysburg: %p\n", gettysburgAddress);
  return 0;
}
