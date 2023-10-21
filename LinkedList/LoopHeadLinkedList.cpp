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
    1 -> Check weather it contains loop or not if no then return False ; 
    2 -> if Loop is there , then 
         Initiallize slow to head;
         continue until slow != fast;
         return slow 

*/

struct Node *  LoopHeadLinkedList(Node * head )
{
    if (head == nullptr || head -> next == nullptr)
        return head; ; 

    bool bFlag = false;
    Node * slow = head ; 
    Node * fast = head ; 

    while (fast != nullptr && fast -> next != nullptr)
    {
        slow = slow -> next ; 
        fast = fast -> next -> next ; 
        if (slow == fast)
        {
                slow = head ; 
                while (slow != fast)
                {
                    slow = slow -> next ; 
                    fast = fast -> next ; 
                }
                return slow;

        }
    } 
    return head;
}

int main(){
    return 0;
}