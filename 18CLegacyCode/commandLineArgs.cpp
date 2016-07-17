/* commandLineArgs.cpp */
#include <fstream>
using std::ifstream;
using std::ofstream;

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

int main(int argc, char* argv[]) {
  if (argc != 3) {
    cout << "Usage: copy infile outfile" << endl;
  } else {
    ifstream inFile(argv[1], ios::in);

    if (!inFile) {
      cout << argv[1] << " could not be opened" << endl;
      return -1;
    }

    ofstream outFile(argv[2], ios::out);

    if (!outFile) {
      cout << argv[2] << " could not be opened" << endl;
      inFile.close();
      return -2;
    }

    while (!inFile.eof()) {
      outFile.put(static_cast<char>(inFile.get()));
    }

    inFile.close();
    outFile.close();
  }

  return 0;
}
