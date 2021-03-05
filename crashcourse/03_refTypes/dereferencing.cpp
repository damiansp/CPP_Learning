#include <cstdio>


int main() {
  int gettysburg{};
  int* gettysburgAddress = &gettysburg;

  printf("Value at gettysburgAddress: %d\n", *gettysburgAddress);
  printf("Gettysburg Address: %p\n", gettysburgAddress);
  *gettysburgAddress = 17325;
  printf("Value at gettysburgAddress: %d\n", *gettysburgAddress);
  printf("Gettysburg Address: %p\n", gettysburgAddress);
  return 0;
}
