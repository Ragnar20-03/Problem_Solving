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
    1 -> reverse 1st k nodes ;
    2 -> preserve Tail of first reverse list ;
    3 -> reverse second part of list ;
    4 -> link fisrt preserve Tail of first reverse list to new Head of second reverse linked list;

*/

struct Node *  DeleteNodeFromEnd(Node * head , int k)
{
    Node * prev = nullptr ; 
    Node * current = head ; 
    Node * next = nullptr ; 
    Node * preserve = head ;

    while (k --)
    {
        next = current -> next ; 
    
        current -> next = prev ; 
        prev = current ; 
        current = next;
    }
    Node * newHead = prev ; 
    prev = nullptr;

    while (current != nullptr)
    {
        next = current -> next ; 
    
        current -> next = prev ; 
        prev = current ; 
        current = next;
    }
    preserve -> next = prev ;

    return newHead;
}

int main(){
    return 0;
}