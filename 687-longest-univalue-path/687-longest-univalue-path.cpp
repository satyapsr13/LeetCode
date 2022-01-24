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
    int find(TreeNode* root,int &ans,int par)
    {
        if(root==nullptr)return 0;
        
        auto l=find(root->left,ans,root->val);
        auto r=find(root->right,ans,root->val);
        
        int temp=0;
        if(root->val==par)
         temp=max({l+1,r+1});
      
        ans=max({temp,ans,l+r});
         
        return temp;
    }
public:
    int longestUnivaluePath(TreeNode* root) {
        int ans=0;
       int t= find(root,ans,-1000000);
        
        return ans;
    }
};