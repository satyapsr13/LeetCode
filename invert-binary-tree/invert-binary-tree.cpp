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
    TreeNode* find(TreeNode*r )
    {   if(r==nullptr)
            return r;
     TreeNode*  ans=new TreeNode(r->val);
      
     ans->left=find(r->right);
      ans->right=find(r->left);
     
        return ans;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        // if(root==nullptr)
        // return root;
        // TreeNode*ans;
        
        
        return find(root); ;
    }
};