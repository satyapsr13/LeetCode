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
    ListNode* getMid(ListNode* head)
    {
        ListNode  *slow=head,*fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void printll(ListNode*head)
    {
        while(head)
        {
            cout<<head->val<<" ";
            head=head->next;
            
        }
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head,*prev=NULL ;
        while(cur){
           ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        
        auto mid=getMid(head);
      //   cout<<mid->next->val;
     mid= reverse(mid);
        
      //   mid=getMid(head);
        // printll(mid);
        while(head  and mid)
        {
            if(head->val !=mid->val)
                return 0;
            head=head->next;
            mid=mid->next;
        }
        return 1;
    
    
    }
};