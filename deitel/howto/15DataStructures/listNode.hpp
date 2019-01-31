/* listNode.hpp */
// ListNode template definition
#ifndef LIST_NODE_HPP
#define LIST_NODE_HPP

template<class NODETYPE> class List;

template<class NODETYPE>
class ListNode {
  friend class List<NODETYPE>;

public:
  // Constr
  ListNode(const NODETYPE&);

  // Acc
  NODETYPE getData() const;

private:
  NODETYPE data;
  ListNode<NODETYPE>* nextPtr; // next node in the list
};

// Constr
template<class NODETYPE>
ListNode<NODETYPE>::ListNode(const NODETYPE& info)
  : data(info), nextPtr(0) {}

// Acc
// Return a copy of the data in the node
template<class NODETYPE>
NODETYPE ListNode<NODETYPE>::getData() const { return data; }

#endif
