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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int sizeOfList = 0;
        ListNode * temp = head;
        ListNode * x  = new ListNode(0);
        x->next = head;
        
        while(temp)
        {
            sizeOfList++;
            temp = temp->next;
        }
        if(sizeOfList == 1)
        {
            return temp;
        }

        int count = sizeOfList - n ;
        temp = x;
        while(count> 0)
        {
            temp = temp->next;
            count--;
        }

        temp->next = temp->next->next;

        return  x->next;


    }
};