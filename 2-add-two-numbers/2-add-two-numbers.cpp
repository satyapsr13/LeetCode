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
        int bal=0;
        ListNode* ans=new ListNode(-1);
        ListNode* res=ans;
        // ListNode* temp=new ListNode();
        while(l1 and l2)
        {
            int sum=l1->val+l2->val+bal;
            if(sum>9){
                bal=1;
            }else{
                bal=0;
            }
           sum=(sum%10);
           
            if(ans->val==-1)
           {
               ans->val=sum;
           }else{
               // cout<<sum<<" ";
               // ans->next=new ListNode(sum,temp);
                ListNode* temp=new ListNode(sum);
                ans->next=temp;
                 ans=ans->next;
            }
            // }
            // ans=ans->next;
            l1=l1->next;
            l2=l2->next;
            
        }while(l1 )
        {
            int sum=l1->val+bal;
            if(sum>9){
                bal=1;
            }else{
                bal=0;
            }
           sum=(sum%10);
           
            if(ans->val==-1)
           {
               ans->val=sum;
           }else{
               // cout<<sum<<" ";
               // ans->next=new ListNode(sum,temp);
                ListNode* temp=new ListNode(sum);
                ans->next=temp;
                 ans=ans->next;
            }
            // }
            // ans=ans->next;
            l1=l1->next;
            // l2=l2->next;
            
        }
        while( l2)
        {
            int sum=l2->val+bal;
            if(sum>9){
                bal=1;
            }else{
                bal=0;
            }
           sum=(sum%10);
           
            if(ans->val==-1)
           {
               ans->val=sum;
           }else{
               // cout<<sum<<" ";
               // ans->next=new ListNode(sum,temp);
                ListNode* temp=new ListNode(sum);
                ans->next=temp;
                 ans=ans->next;
            }
            // }
            // ans=ans->next;
            // l1=l1->next;
            l2=l2->next;
            
        }
        if(bal!=0)
        {
              ListNode* temp=new ListNode(1);
                ans->next=temp;
                 // ans=ans->next;
        }
        return res;
    }
};