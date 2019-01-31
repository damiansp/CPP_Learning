/* treeNode.hpp */
// Definition of class template TreeNode (node in a binary tree)
#ifndef TREE_NODE_HPP
#define TREE_NODE_HPP

template<class NODETYPE> class Tree;

template<class NODETYPE>
class TreeNode {
  friend class Tree<NODETYPE>;
public:
  // Constr
  TreeNode(const NODETYPE& d)
    : leftPtr(0), data(d), rightPtr(0) {}

  // Acc
  NODETYPE getData() const { return data; }

private:
  TreeNode<NODETYPE>* leftPtr;  // pointer to left subtree...
  TreeNode<NODETYPE>* rightPtr; // ... and right
  NODETYPE data;
};

#endif
