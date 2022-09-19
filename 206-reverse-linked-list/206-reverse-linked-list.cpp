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
        
        if(!head or !head->next)
        {
            return head;
        }
        
        ListNode * first=head->next;
        ListNode* sec=first->next; 
        head->next=nullptr;
        while(sec)
        {  
            
            first->next=head;
            head=first;
            first=sec;
            sec=sec->next;
            
            
        }
        
        first->next=head;
        head=first;
        return head;
    }
};