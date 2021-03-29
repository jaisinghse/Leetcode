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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * temp = new ListNode(0);
        ListNode * head = temp;
        int rem = 0;
        
        while(l1 && l2)
        {
            int value = rem + l1->val + l2->val;
            rem = value/10;
            value = value%10;
            ListNode * data = new ListNode(value);
            temp->next = data;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while (l1)
        {
            int value = rem + l1->val ;
            rem = value/10;
            value = value%10;
            ListNode * data = new ListNode(value);
            temp->next = data;
            temp = temp->next;
            l1 = l1->next;
        }
        
        while (l2)
        {
            int value = rem + l2->val;
            rem = value/10;
            value = value%10;
            ListNode * data = new ListNode(value);
            temp->next = data;
            temp = temp->next;
            l2 = l2->next;
        }
        
        if(rem)
        {
            ListNode * data = new ListNode(rem);
            temp->next = data;
            temp = temp->next;
        }
        
        
         return head->next;  
    }
};