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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp=head;
        ListNode* fst;
        int i=0;
        while(temp)
        {
            i++;
            if(i==k)
                fst=temp;
            
            temp=temp->next;
            
           
        }
        if(i==1)return head;
        // cout<<fst->val;
        
        ListNode* snd;
        int j=0;
        temp=head;
        while(temp)
        {
            j++;
            if(j==(i-k+1))
                snd=temp;
            
            
            
           
            temp=temp->next;
        }
        cout<<snd->val;
        // snd->val=(fst->val)^(snd->val);
        // fst->val=(fst->val)^(snd->val);
        // snd->val=(fst->val)^(snd->val);
        swap(snd->val,fst->val);
        return head;
        // while(head)
    }
};