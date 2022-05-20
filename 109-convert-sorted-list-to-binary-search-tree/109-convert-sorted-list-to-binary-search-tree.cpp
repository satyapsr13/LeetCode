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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    ListNode* findMid(ListNode* start,ListNode*last)
    {
        if(start==nullptr)return nullptr;
    
        ListNode * slow=start;
        
        ListNode * fast=start;
        while(fast!=last and fast->next!=last)
        {
            slow=slow->next;
            
            fast=fast->next->next;
        }
        // cout<<slow->val<<" ";
        return slow;
        
    }
    
    TreeNode* find(ListNode* start,ListNode* temp1)
    {
        if(!start)return nullptr;
        
       if(start==temp1)return nullptr;
        
        ListNode* temp=findMid(start,temp1); 
        if(temp) {  
        TreeNode* root= new TreeNode(temp->val);
        
        root->left=find(start,temp);
        
        root->right=find(temp->next,temp1);
       
        return root;
         }else{
            return nullptr;
        }
        
    }
    
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        // cout<<"[";
        // for(int i=0;i<20000;++i)
        //  cout<<i<<",";
        // cout<<"]";
        
        
        
        return find(head,nullptr);
   
    
    
    }
};