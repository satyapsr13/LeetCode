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
    // int mx=INT_MIN;
    int find(TreeNode*root,int &ans)
    {
        if(root==nullptr)
            return 0;
        int l=find(root->left,ans);
        
        int r=find(root->right,ans);
       
        int temp=max(max(l,r)+root->val,root->val);
        
        int mx=max(temp,l+r+root->val);
        
        ans=max(ans,mx);
       // cout<<l<<" "<<r<<" "<<ans<<endl;
        return temp;
 
    }
public:
    int maxPathSum(TreeNode* root) {
        int t=root->val;
        int ans=find(root,t);
       
        return t;
        
    }
};