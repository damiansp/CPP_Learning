/* Operate on poll results stored in an array */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  const int responseSize = 40,
    freqSize = 11;
  int responses[responseSize] = {9, 5,10, 2, 7, 8, 9, 3, 4, 8,
                                 7, 4,10, 8, 4, 7, 9, 9, 3, 8,
                                 7, 5, 1, 4, 7, 8, 9, 8, 7, 4,
                                 1,10, 7, 6, 4, 7, 4, 6, 6, 5};
  int freq[freqSize] = {0}; /* initalizes all to 0 */

  for (int answer = 0; answer < responseSize; answer++) {
    ++freq[responses[answer]];
  }

  cout << "Rating" << setw(10) << "Frequency" << setw(10) << "Histogram"
       << endl;

  for (int rating = 1; rating < freqSize; rating++) {
    cout << setw(6) << rating << setw(10) << freq[rating] << setw(2);

    for (int j = 0; j < freq[rating]; j++) {
      cout << '*';
    }

    cout << endl;
  }
  
  
  return 0;
}
