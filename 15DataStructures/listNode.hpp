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
  ListNode<NODETYPE>* nexPtr; // next node in the list
};

#endif
