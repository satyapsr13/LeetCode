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
    void find(TreeNode*root,int &ans,int mn,int mx)
    {
        if(root==nullptr)return ;
         mn=min(mn,root->val);
        mx=max(mx,root->val);
        find(root->left,ans,min(mn,root->val),max(mx,root->val));
        
        ans=max(ans,mx-mn);
        // cout<<mx<<" "<<mn<<" "<<root->val<<endl;
        find(root->right,ans,min(mn,root->val),max(mx,root->val));
    
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        
        int ans=0;
       find(root,ans,root->val,root->val);
        return ans;
    }
};