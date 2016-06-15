/* ema.cpp */
#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cout;

#include <math.h>

/** 
    ema
    Calculates an exponentially-weighted moving average

    @param x: the input array for which the EMA is being calculated (assumes
         first datum is the oldest)
    @param n: length of array, x
    @param window: number of days over which to calculate the average
    @param lambda: exponent that determines the rate of decay of the weighting

    @return an array of moving averages for indices window ~ n
        (indices 0 ~ window cannot be computed; assigned NULL)
*/
void ema(double x[], const int n, const int window, double lambda) {
  int i;
  double movingAvg[n];
  double weights[window];
  double weightedVals[window];
  double total = 0, // sum of current window
    oldest,         // oldest *weighted* value (to be dropped from window)
    newest;         // newest *weighted* value (to be added to window);
  
  weights[window] = 1;

  // set movingAvg values with indices < window to NULL
  /*
  for (i = 0; i < window; i++) {
    movingAvg[i] = NULL;
  }
  */
  
  // Set weights as an exponential decaying series
  for (i = window - 1; i > 0; i--) {
    weights[i] = weights[i + 1] * lambda;
  }

  // Calculate moving average of first (i.e., most recent) window
  for (i = 1; i <= window; i++) {
    weightedVals[i] = weights[i] * x[n - window + i];
    total += weightedVals[i];
  }

  oldest = weightedVals[window];
  movingAvg[n] = total / window;

  // Move window backwards through x and weighted values arrays, dropping the old
  // datum and adding the new, and recalculating the EMA
  for (i = n - 1; i >= 0; i--) {
    // previous weighted value = weightedVals[i + 1]
    total = movingAvg[i + 1] * window; // sum of previous window
    // Newest *weighted* value is x[i] weighted by lambda^(window - 1)
    // (window - 1 because the first lambda is 1 or lambda^0)
    newest = x[i - window + 1] * pow(lambda, window - 1);
    // Drop the old value then divide by lambda ("shifts" the weights) and add on
    // the new weighted value.  That is the new sum of weighted values.  Divide by
    // window (the number of values) to get the EMA for this index
    movingAvg[i] = ((total - oldest) / lambda + newest) / window;

    // Update oldest
    oldest = x[i];
  }

  // Output results
  cout << "\n\nMoving Averages:\n";
  for (i = 0; i < n; i++) {
    printf("%.2f\t", movingAvg[i]);
  }

  // Change return type and update to return array
  // return movingAvg;
}






int main() {
  const int DATA_POINTS = 10;
  double x[DATA_POINTS] = { 6, 6, 6, 6, 5, 4, 3, 2, 1, 0 };
  double randN;
  int direction;

  // Seed random number generator
  // srand(time(0));

  
  
  // Create artificial data for x, modeled as a random walk
  /*
  x[0] = 1.0;

  for (int i = 1; i <= DATA_POINTS; i++) {
    // Determine direction: P(up) = 0.6, P(down) = 0.4
    randN = rand() % 100;
    direction = (randN < 60) ? 1 : -1;
    randN = (rand() % 100) / 100.0;
    //    printf("%.4f  ", randN);
    x[i] = x[i - 1] + direction * randN;
  }
  */

  // TEST: Output x
  cout << "\n\nx:\n";
  for (int i = 0; i < DATA_POINTS; i++) {
    printf("%.4f\t", x[i]);
  }

  ema(x, DATA_POINTS, 3, 0.5);

  printf("\n");
  
  return 0;
}
