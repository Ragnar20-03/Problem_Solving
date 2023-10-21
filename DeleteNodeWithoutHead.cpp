#include<iostream>

using namespace std ; 

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
    1 . copy data of next Node to pointing node  ; 
    2 . link next of pointing node to next of next node;
*/

void DeleteNodeWithoutHead(Node * del , int iPos)
{
    Node * temp = del -> next;

    del -> data = temp -> data ; 
    del -> next = temp -> next ; 

    free(temp -> next);
}

int main(){
    return 0;
}