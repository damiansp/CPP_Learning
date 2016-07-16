/* memMove */
// void* memmove(void* s1, const void* s2, size_t n)
// Copy n charsfrom s2 into s1; return pointer to s1
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char x[] = "Home sweet home";

  cout << "x: " << x;
  cout << "\nAfter memmove(x, &x[5], 10): "
       << static_cast<char*>(memmove(x, &x[5], 10)) << endl;

  return 0;
}
