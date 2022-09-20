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
    
    int find(ListNode* &head,int n)
    {
        // head=nullptr;
        if(!head)
        {
            return 0;
        }
         int nth=find(head->next,n)+1;
        
        if(nth==n)
        {
            if(!head->next)
            {
                head=nullptr;
            }else{
                head->val=head->next->val;
                head->next=head->next->next;
            }
           
        }
        return nth;
        
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        int t=find(head,n);
       return head; 
    }
};