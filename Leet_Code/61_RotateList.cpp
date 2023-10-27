/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head -> next == nullptr || k == 0 ) return head;
        ListNode * current = head ; 
        ListNode * prev = nullptr;
        while (k --)
        {
            current = head ;
            while (current -> next != nullptr)
            {
                prev = current ; 
                current = current -> next ; 
            }
            prev -> next = nullptr ; 
            current -> next = head ; 
            head = current;
        } 
        return head;
    }
};
// ====================================================
// This approach is time consuming 
// Correct Solution is 
// ====================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
            if (head == nullptr || head -> next == nullptr || k == 0 )
            {
                return head; 
            }
        ListNode * tail = head ;
        int iCount = 0 ; 
        while (tail -> next != nullptr )
        {
            iCount ++ ; 
            tail = tail -> next ; 
        }
        iCount ++ ; 
        tail -> next = head ; 
        int t = iCount - k % iCount;

        for (int iCnt = 0 ; iCnt < t ; iCnt++)
        {
            tail = tail -> next ; 
        }
        head = tail -> next ; 
        tail -> next = nullptr;
        return head;

    }
};