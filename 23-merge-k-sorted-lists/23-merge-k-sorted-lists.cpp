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
    priority_queue<int,vector<int>,greater<int>>pq;
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *temp=new ListNode(),*ans;
            // if()
        int n=lists.size();
        // if(n==0)return nullptr;
        // if(lists[0]==nullptr)return nullptr;
        int t=1;
        for(int i=0;i<n;++i)
        {  ListNode* head= lists[i];
            while(head)
            {pq.push(head->val);
             t++;
             head=head->next;
                
            }
        }
        if(pq.empty())return nullptr;
        ans=temp;
        ListNode*a;
        while(!pq.empty() and --t)
        {  a=temp;
            int t1=pq.top();
            pq.pop();
            temp->val=t1;
            cout<<temp->val;
            
            // temp=new temp->next;
            if(t!=1)   
            {  temp->next=new ListNode();
                temp=temp->next;
            }
        }
        // a=nullptr;
        // cout<<a->val; 
        return ans;
    }
};