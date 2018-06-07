/* treeTest.cpp */
#include <iomanip>
#include <iostream>
#include "tree.hpp"

using std::cin;
using std::cout;
using std::ios;
using std::setiosflags;
using std::setprecision;


int main() {
  Tree<int> intTree;
  Tree<double> doubTree;
  int intVal, i;
  double doubVal;

  cout << "Enter 10 integer values:\n";
  for (i = 0; i < 10; i++) {
    cin >> intVal;
    intTree.insertNode(intVal);
  }

  cout << "\nPreorder traversal\n";
  intTree.preOrderTraversal();
  cout << "\nInorder traversal\n";
  intTree.inOrderTraversal();
  cout << "\nPostorder traversal\n";
  intTree.postOrderTraversal();

  // Repeat with doubles
  cout << "\n\n\nEnter 10 double values:\n"
       << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
  
  for (i = 0; i < 10; i++) {
    cin >> doubVal;
    doubTree.insertNode(doubVal);
  }

  cout << "\nPreorder traversal\n";
  doubTree.preOrderTraversal();
  cout << "\nInorder traversal\n";
  doubTree.inOrderTraversal();
  cout << "\nPostorder traversal\n";
  doubTree.postOrderTraversal();

  cout << endl << endl;
    
  return 0;
}
