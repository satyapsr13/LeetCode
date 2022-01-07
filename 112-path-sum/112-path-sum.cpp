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
    
    bool find(TreeNode*root,int sum)
    {   if(!root)return false;
     
        if(root->left==nullptr and root->right==nullptr and root->val==sum)
        {
            return true;
        }
        // if(sum<=0)return false;
        return find(root->left,sum-root->val)||find(root->right,sum-root->val);
        
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
    
        return find(root,targetSum);
    }
};