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
// class Node{
  
//     int val,int level;
//     Node(int _val,int _level)
//     {
        
//     }
// };
class Solution {
    int ans=0;
    int level=0;
    int find(ListNode* root)
    {
        if(root->next==nullptr)
            return root->val;
        
        int a=find(root->next);
        
        
        ans+=(((1<<level))*a);
        
        // cout<<(pow(2,level))<<" "<<a<<endl;
        
        level++;
        
        return root->val;
        
    }
    
public:
    int getDecimalValue(ListNode* head) {
       
        int a=find(head);
        
        
        return ans+((1<<level)*(head->val));
    }
};