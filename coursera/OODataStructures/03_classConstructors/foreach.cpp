/**
 * Compile with:
 *   clang++ foreach.cpp -std=c++11 -stdlib=libc++ -o foreach.exe 
 */
#include <iostream>
#include <vector>


int main() {
  std::vector<int> int_list;

  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);
  for (int x: int_list) { x = 99; } /* x is a copy local to for loop */
  for (int x: int_list) { std::cout << "x: " << x << std::endl; }

  for (int &x: int_list) { x = 99; } /* modifies each */
  for (int x: int_list) { std::cout << "x: " << x << std::endl; }

  for (const int &x: int_list) {
    std::cout << "x: " << x << std::endl; 
    //x = 0; // would throw an error b/c const makes read only
  }
  return 0;
}
