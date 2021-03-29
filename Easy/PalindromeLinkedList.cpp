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
    bool isPalindrome(ListNode* head) {
    
        stack<int> s;
        
        ListNode * temp = head;
        while(head){
            s.push(head->val);
            head = head->next;
        }

        while (!s.empty())
        {
            int data = s.top();
            s.pop();
            if(data != temp->val)
            {
                return false;
            }
            temp = temp->next;
        }

        return true;
        
    }
};