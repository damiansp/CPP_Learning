#include <cstdio>


struct Taxonomist {
  Taxonomist() { printf("(no arg)\n"); }
  Taxonomist(char x) { printf("char: %c\n", x); }
  Taxonomist(int x) { printf("int: %d\n", x); }
  Taxonomist(float x) {printf("float: %f\n", x); }
};


int main() {
  Taxonomist t1;            // (no arg)
  Taxonomist t2{'c'};       // char: c
  Taxonomist t3{123};       // int: 123
  Taxonomist t4{6.022e23f}; // float: 602200013124147498450944.000000
  Taxonomist t5('g');       // char: g
  Taxonomist t6 = {'t'};    // char: t
  Taxonomist t7{};          // (no arg)
  //Taxonomist t8(); // err
  return 0;
}
