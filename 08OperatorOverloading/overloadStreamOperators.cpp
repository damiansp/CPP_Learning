/* overloadStreamOperator.cpp */
// Overloading the stream insertion (<<) and stream extraction (>>) opeartors
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

#include <iomanip>
using std::setw;

class PhoneNumber {
  friend ostream &operator<<(ostream &, const PhoneNumber &);
  friend istream &operator>>(istream &, PhoneNumber &);

private:
  char areaCode[4],
    exchange[4],
    line[5];
};


// Overload stream-insertion operator <<
ostream &operator<<(ostream &output, const PhoneNumber &num) {
  output << "(" << num.areaCode << ") " << num.exchange << '-' << num.line;
  return output;
}

// Overload >>
istream &operator>>(istream &input, PhoneNumber &num) {
  input.ignore();                   // skip (
  input >> setw(4) >> num.areaCode; // input area code
  input.ignore(2);                  // skip ) and following space
  input >> setw(4) >> num.exchange; // input exchange
  input.ignore();                   // skip -
  input >> setw(5) >> num.line;     // input line

  return input;
}



int main() {
  PhoneNumber phone;
  cout << "Enter phone number formatted as (###) ###-####:\n";

  // cin >> phone invokes operator>>(cin, phone)
  cin >> phone;

  // cout << invokes operator<<(cout, phone)
  cout << "The phone number entered was: " << phone << endl;

  return 0;
}
