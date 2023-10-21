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
    1 -> maintain 2 pointers , Slow and Fast
    2 -> Slow pointer shift by 1 node and Fast by 2 nodes 
    3 -> repeat till fast != nullptr && fast -> next != nullptr ; 
    4 -> if slow == fast return true ; 
    5 -> else false;

*/

bool DetectLoop(Node * head )
{
    if (head == nullptr || head -> next == nullptr)
        return false ; 

    bool bFlag = false;
    Node * slow = head ; 
    Node * fast = head ; 

    while (fast != nullptr && fast -> next != nullptr)
    {
        slow = slow -> next ; 
        fast = fast -> next -> next ; 
        if (slow == fast)
        {
            bFlag = true;
            break;
        }
    } 
    return bFlag;
}

int main(){
    return 0;
}