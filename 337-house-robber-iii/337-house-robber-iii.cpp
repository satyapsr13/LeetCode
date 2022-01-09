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
    // int ans=0;
    unordered_map<TreeNode*,int>dp;
    int find(TreeNode*root,int ans )
    {
        if(root==nullptr)return ans;
        if(root->left==nullptr and root->right==nullptr )return root->val;
        int l1=0,r1=0,l2=0;
        if(dp[root])
            return dp[root];
        if(root->left)
           l1=find(root->left->left,ans)+find(root->left->right,ans);
        if(root->right)
          r1=find(root->right->left,ans)+find(root->right->right,ans);
        
          l2=find(root->left ,ans )+find(root->right,ans);
        
        return dp[root]= max(l1+r1+root->val,l2);
         // int r2=find(root->right ,ans+root->val)+find(root->right->right,ans+root->val);
        
        
    }
public:
    int rob(TreeNode* root) {
        
        int mx=0;
        int t ;
        return t=find(root,mx);
    }
};