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
    int find(TreeNode*root,int &res)
    {
        if(root==nullptr)return 0;
        
        
        int l=find(root->left,res);
        int r=find(root->right,res);
        
        
        int temp=max(l,r)+1;
        int ans=max(temp,l+r+1);
        res=max(res,ans);
        return temp;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int mx=0;
        int t=find(root,mx);
        return mx-1;
    
    }
};