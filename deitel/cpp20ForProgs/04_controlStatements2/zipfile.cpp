#include <iostream>
#include <string>

#include "zip_file.hpp"

using namespace std;


int main() {
  string zipFileName;

  cout << "Enter name of zip file: ";
  getline(cin, zipFileName);

  string content{
    "This chapter introduces all but one of the remaining control statements--"
    "the for, do...while, switch, break and continue statements. We explore the "
    "essentials of counter-controlled iteration. We use compound-interest "
    "calculations to begin investigating the issues of processing monetary "
    "amounts. First, we discuss the representational errors associated with "
    "floating-point types. We use a switch statement to count the number of A, "
    "B, C, D and F grade equivalents in a set of numeric grades. We show C++17's "
    "enhancements that allow you to initialize one or more variables of the same "
    "type in the headers of if and switch statements."};
  cout << "\ncontent.length(): " << content.length();
  return 0;
}
