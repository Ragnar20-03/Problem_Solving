#include<iostream>

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// Approach : 
/*
    1 ->  Maintain 3 pointers 
    2 ->  prev curr next
    3 ->  link each current node to previous 
    4 ->  shift current node and prev node one node ahead;
    5 ->  return new Head as Prev; 
*/

struct Node *  DeleteNodeWithoutHead(Node * head)
{
    Node * prev = nullptr;
    Node * current = head;
    Node * next = nullptr;

    while (current != nullptr)
    {
        next = current -> next ; 

        current -> next = prev ; 
        prev  = current ;
        current = next;
    }
    return prev;
}

int main(){
    return 0;
}