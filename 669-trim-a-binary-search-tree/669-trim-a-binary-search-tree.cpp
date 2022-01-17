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
    TreeNode* find(TreeNode*root,int l,int h)
    {
        if(root==nullptr)return root;
        
        if(root->val<l)
          return  root=find(root->right,l,h);
        if(root->val>h)
          return  root=find(root->left,l,h);
        
        root->left=find(root->left,l,h);
        root->right=find(root->right,l,h);
        return root;
        // root->left=
    }
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        return find(root,low,high);
    }
};