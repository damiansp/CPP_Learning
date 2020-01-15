#include <iostream>
using namespace std;


double square(double x) { return x * x; }


void print_square(double x) { cout << x << "^2 = " << square(x) << "\n"; }


int main() { print_square(1.234); }
