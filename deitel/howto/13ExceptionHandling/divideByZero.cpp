/* divideByZero.cpp */
// Simple exception handling example
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Class to be used in exception handling for divide by zero
class DivideByZeroException {
public:
  // Constr
  DivideByZeroException() : message("attempted to divide by zero") {}

  const char* what() const { return message; }

private:
  const char* message;
};

// Definition of a function quotient; Demo error throwing
double quotient(int numerator, int denominator) {
  if (denominator == 0) {
    throw DivideByZeroException();
  }

  return static_cast<double> (numerator) / denominator;
}



int main() {
  int n1, n2;
  double result;

  cout << "Enter two integers (EOF to end): ";

  while (cin >> n1 >> n2) {
    try {
      result = quotient(n1, n2);
      cout << "The quotient is: " << result << endl;
    } catch (DivideByZeroException e) {
      cout << "Exception occurred: " << e.what() << endl;
    }

    cout << "\nEnter two integers (EOF to end): ";
  }

  cout << endl;
  
  return 0;
}
