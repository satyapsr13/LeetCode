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
    ListNode* reverseList(ListNode* head) {
        
        ListNode*prev,*cur;
        cur=head; 
        prev=nullptr;
        while(cur)
        {
            ListNode*temp= cur->next;
            cur->next=prev;
            // cur=temp->next;
            prev=cur;
            cur=temp;
            
            
        }
    return prev;}
};