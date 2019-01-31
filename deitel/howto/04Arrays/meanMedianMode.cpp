/* Compute mean, median, and mode from an array */
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;

void mean(const int answer[], int arraySize) {
  int total = 0;
  cout << "**********\n Mean\n**********\n";

  for (int i = 0; i < arraySize; i++) {
    total += answer[i];
  }

  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(4)
       << static_cast<double> (total) / arraySize << "\n\n";
}


void bubbleSort(int a[], int size) {
  int hold;

  for (int pass = 1; pass < size; pass++) {
    for (int i = 0; i < size - 1; i++) {
      if (a[i] > a[i + 1]) {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }
}

void median(int answer[], int size) {
  cout << "**********\n Median\n**********\n";

  bubbleSort(answer, size);

  cout << answer[size / 2] << "\n\n";
}

void mode(int freq[], int answer[], int size) {
  int rating,
    largest = 0,
    modeVal = 0;

  cout << "**********\n Mode\n**********\n";

  // init freq[]
  for (rating = 1; rating <= 9; rating++) {
    freq[rating] = 0;
  }

  for (int i = 0; i < size; i++) {
    ++freq[answer[i]];
  }

  cout << "Response" << setw(11) << "Frequency"  << setw(19) << "Histogram\n\n"
       << setw(55) << "1    1    2    2\n"
       << setw(56) << "5    0    5    0    5\n\n";

  for (rating = 1; rating <= 9; rating++) {
    cout << setw(8) << rating << setw(11) << freq[rating] << "          ";

    if (freq[rating] > largest) {
      largest = freq[rating];
      modeVal = rating;
    }

    // draw histogram
    for (int i = 1; i <= freq[rating]; i++) {
      cout << "*";
    }

    cout << "\n";
  }

  cout << "Mode: " << modeVal << endl;
}




int main() {
  const int responseSize = 99;
  int freq[10] = {0},
    response[responseSize] = { 6, 5, 2, 5, 5, 4, 6, 4, 4, 5,
                               5, 5, 2, 3, 2, 5, 5, 5, 6, 5,
                               4, 4, 5, 7, 5, 6, 5, 8, 2, 7,
                               2, 5, 7, 5, 4, 6, 6, 3, 2, 5,
                               5, 7, 5, 9, 3, 5, 5, 5, 9, 5,
                               8, 1, 8, 4, 6, 7, 4, 6, 5, 8,
                               5, 3, 4, 6, 6, 5, 5, 4, 5, 8,
                               6, 2, 4, 1, 5, 8, 8, 4, 6, 6,
                               5, 4, 3, 4, 4, 3, 7, 7, 6, 1,
                               4, 5, 4, 5, 4, 3, 9, 6, 1 };
  mean(response, responseSize);
  median(response, responseSize);
  mode(freq, response, responseSize);
  
  return 0;
}
