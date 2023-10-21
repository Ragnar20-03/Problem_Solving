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
    1 -> Count Total number of Elements ;
    2 -> reach to prev node of deleting node by (iCount - n );
    3 -> delete Node ;
*/

struct Node *  DeleteNodeFromEnd(Node * head , int n)
{
    int iCount = 0 ; 
    Node * temp = head ; 
    while (temp != nullptr)
    {
        iCount++ ; 
        temp = temp -> next ;
    }
    temp  = head ; 
    for (int iCnt = 0 ; iCnt < iCount-n ; iCnt++)
    {
        temp = temp -> next ; 
    }

    return temp -> next ;

}

int main(){
    return 0;
}