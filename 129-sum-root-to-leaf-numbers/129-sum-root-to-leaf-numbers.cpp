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
    int ans=0;
    void find(TreeNode*root,int level,int &sum)
    {
        if(root==nullptr)
            return ;
        // sum+=(root->val*)
        int i=level*10+root->val;
        find(root->left,i,sum);
        
        find(root->right,i,sum);
        if(!root->left and !root->right)sum+=i;
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum=0;
        find(root,0,sum);
        return sum;
        
    }
};