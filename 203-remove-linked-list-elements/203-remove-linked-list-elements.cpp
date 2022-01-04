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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==nullptr)return head;
        auto temp=head;
        // auto ans=temp;
        while(temp){
            if(temp==nullptr)
                break;
            if(temp->next )
            {
                if(temp->next->val==val)
                {cout<<temp->val<<endl;
                    temp->next=temp->next->next;
                continue;
                }
            
                
            }else{
                if(temp->val==val)
                    temp=nullptr;
                break;
            
            }
            
        temp=temp->next;
        }
        if(head->val==val)
            head=head->next;
        return head;
    }
};