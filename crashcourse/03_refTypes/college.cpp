#include <cstdio>


struct College {
  char name[256];
};


void printName(College* collegePtr) {
  printf("%s College\n", collegePtr->name);
}


int main() {
  College bestColleges[] = {"Magdalen", "Nuffield", "Kellog"};
  printName(bestColleges);
  /* we are passing in a pointer to the array, which points at the first 
     element, so output is just "Magdalen College" 
  */
}

  
