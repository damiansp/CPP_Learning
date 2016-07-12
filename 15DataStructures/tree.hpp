/* tree.hpp */
// Def of Tree template class
#ifndef TREE_HPP
#define TREE_HPP

#include <cassert>
#include <iostream>
#include "treeNode.hpp"

using std::endl;
using std::cout;

template<class NODETYPE>
class Tree {
public:
  // Constr
  Tree();
  void insertNode(const NODETYPE&);
  void preOrderTraversal() const;
  void inOrderTraversal() const;
  void postOrderTraversal() const;
private:
  TreeNode<NODETYPE>* rootPtr;

  // Utils
  void insertNodeHelper(TreeNode<NODETYPE>**, const NODETYPE&);
  void preOrderHelper(TreeNode<NODETYPE>*) const;
  void inOrderHelper(TreeNode<NODETYPE>*) const;
  void postOrderHelper(TreeNode<NODETYPE>*) const;
};


// Constr
template<class NODETYPE>
Tree<NODETYPE>::Tree() { rootPtr = 0; }

// Receives a pointer to a pointer so that the pointer can be modified
template<class NODETYPE>
void Tree<NODETYPE>::insertNodeHelper(
  TreeNode<NODETYPE>** ptr, const NODETYPE& value) {
  // If tree is empty
  if (*ptr == 0) {
    *ptr = new TreeNode<NODETYPE>(value);
    assert(*ptr != 0);
  } else {
    if (value < (*ptr)->data) {
      insertNodeHelper(&((*ptr)->leftPtr), value);
    } else {
      if (value > (*ptr)->data) {
        insertNodeHelper(&((*ptr)->rightPtr), value);
      } else {
        cout << value << " dup" << endl;
      }
    }
  }
}

template<class NODETYPE>
void Tree<NODETYPE>::insertNode(const NODETYPE& value) {
  insertNodeHelper(&rootPtr, value);
}


template<class NODETYPE>
void Tree<NODETYPE>::preOrderHelper(TreeNode<NODETYPE>* ptr) const {
  if (ptr != 0) {
    cout << ptr->data << ' ';
    preOrderHelper(ptr->leftPtr);
    preOrderHelper(ptr->rightPtr);
  }
}

template<class NODETYPE>
void Tree<NODETYPE>::preOrderTraversal() const {
  preOrderHelper(rootPtr);
}


template<class NODETYPE>
void Tree<NODETYPE>::inOrderHelper(TreeNode<NODETYPE>* ptr) const {
  if (ptr != 0) {
    inOrderHelper(ptr->leftPtr);
    cout << ptr->data << ' ';
    inOrderHelper(ptr->rightPtr);
  }
}

template<class NODETYPE>
void Tree<NODETYPE>::inOrderTraversal() const {
  inOrderHelper(rootPtr);
}


template<class NODETYPE>
void Tree<NODETYPE>::postOrderHelper(TreeNode<NODETYPE>* ptr) const {
  if (ptr != 0) {
    postOrderHelper(ptr->leftPtr);
    postOrderHelper(ptr->rightPtr);
    cout << ptr->data << ' ';
  }
}

template<class NODETYPE>
void Tree<NODETYPE>::postOrderTraversal() const {
  postOrderHelper(rootPtr);
}

#endif
