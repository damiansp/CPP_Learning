/* Scope example */
#include <iostream>

using std::cout;
using std::endl;


int x = 1; // global

// Function prototypes
void a(void);
void b(void);
void c(void);

// Function defs
void a(void) {
  int x = 25;

  cout << endl << "local x in a() after entering: " << x << endl;
  ++x;
  cout << "local x in a() before exiting(): " << x << endl;
}

void b(void) {
  static int x = 50; // static: initialized only the first time b() is called

  cout << endl << "local static x in b() after entering: " << x << endl;
  ++x;
  cout << "local static x in b() before exiting: " << x << endl;
}

void c(void) {
  cout << endl << "global x after entering c(): " << x << endl;
  x *= 10;
  cout << "global x on exiting c(): " << x << endl;
}


int main() {
  int x = 5; // local to main()

  cout << "local x in outer scope of main(): " << x << endl;

  // Start new scope block
  {
    int x = 7;
    cout << "local x in inner scope of main(): " << x << endl;
  }

  cout << "local x, again in outer scope of main(): " << x << endl;

  a();  // has auto local x
  b();  // has static local x
  c();  // uses global x
  a();  // reinstates auto local x
  b();  // static x retains prev val
  c();  // global also retains prev val
  
  return 0;
}
