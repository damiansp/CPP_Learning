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
    "the for, do...while, switch, break and continue statements. We explore the"
    " essentials of counter-controlled iteration. We use compound-interest "
    "calculations to begin investigating the issues of processing monetary "
    "amounts. First, we discuss the representational errors associated with "
    "floating-point types. We use a switch statement to count the number of A, "
    "B, C, D and F grade equivalents in a set of numeric grades. We show "
    "C++17's enhancements that allow you to initialize one or more variables of"
    " the same type in the headers of if and switch statements."};
  cout << "\ncontent.length(): " << content.length();

  miniz_cpp::zip_file output;
  output.writestr("intro.txt", content);
  output.save(zipFileName);

  miniz_cpp::zip_file input{zipFileName};
  cout << "\n\nZip file's name: " << input.get_filename()
       << "\n\nZip file's directory listing:\n";
  input.printdir();

  miniz_cpp::zip_info info{input.getinfo("intro.txt")};
  cout << "\nFile name: " << info.filename
       << "\nOriginal size: " << info.file_size
       << "\nCompressed size: " << info.compress_size;

  string extractedContent{input.read(info)};
  cout << "\n\nOriginal contents of intro.txt:\n" << extractedContent << endl;
  return 0;
}
