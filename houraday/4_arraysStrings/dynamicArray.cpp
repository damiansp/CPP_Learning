#include <iostream>
#include <vector>

using namespace std;


int main() {
  vector<int> dynArray(3);
  int newVal = 0;
  
  dynArray[0] = 365;
  dynArray[1] = -421;
  dynArray[2] = 789;

  cout << "Number of integers in array: " << dynArray.size() << endl;
  cout << "Enter another element to insert: " << endl;
  cin >> newVal;

  dynArray.push_back(newVal);

  cout << "Number of integers in array: " << dynArray.size() << endl;
  cout << "Last element in array: " << dynArray[dynArray.size() - 1] << endl;
  return 0;
}
