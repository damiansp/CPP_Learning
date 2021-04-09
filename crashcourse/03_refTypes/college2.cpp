#include <cstdio>


struct College {
  char name[256];
};


void printNames(College* colleges, size_t nColleges) {
  for (size_t i = 0; i < nColleges; i++) {
    printf("%s College\n", colleges[i].name);
  }
}


int main() {
  College colleges[] = {"Magdalen", "Nuffield", "Kellog"};
  printNames(colleges, sizeof(colleges) / sizeof(College));
}

  
