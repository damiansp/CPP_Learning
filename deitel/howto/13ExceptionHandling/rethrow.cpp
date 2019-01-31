/* rethrow.cpp */
#include <iostream>
using std::cout;
using std::endl;

#include <exception>
using std::exception;

void throwException() {
  // Throw an exception and immediately catch
  try {
    cout << "Function throwException()\n";
    throw exception();
  } catch (exception e) {
    cout << "Exception handled in function throwException()\n";
    throw; // rethrow for further processing
  }

  cout << "This should not print";
}

int main() {
  try {
    throwException();
    cout << "This shouldn't print\n";
  } catch (exception e ) {
    cout << "Exception handled in main()\n";
  }

  cout << "Program control continues after catch in main()" << endl;

  return 0;
}
