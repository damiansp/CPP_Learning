#include <cstdio>


struct Book {
  char name[256];
  int year;
  int nPages;
  bool hardcover;
};


int main() {
  Book neuromancer;

  neuromancer.nPages = 271;
  printf("Neuromancer has %d pages.", neuromancer.nPages);
  return 0;
}
