/** 
 * Approximate by the first n terms of the series
 * pi = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 ...
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int n = 200,
    denom = 1,
    sign = 1; /* 1 if adding; -1 if subtracting */
  double frac,
    sum = 0;

  for (int i = 1; i <= n; i++) {
    // next term
    frac = sign * (double) (4.0 / denom);

    // add to sum
    sum += frac;

    // Output i and sum so far
    cout << i << '\t' << sum << endl;
    
    // change sign for next term
    sign *= -1;

    // incr denom by 2
    denom += 2;
  }

  return 0;
}
