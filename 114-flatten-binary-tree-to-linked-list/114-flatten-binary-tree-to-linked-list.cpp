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
   
    queue<TreeNode*>q;
    void pre(TreeNode* root)
    {
        if(root==nullptr)return;
        q.push(root);
        pre(root->left);
        pre(root->right);
        
    }
public:
    void flatten(TreeNode* root) {
        
        if(root==nullptr) return;
        pre(root);
        q.pop();
        while(!q.empty())
        {
            auto cur=q.front();
            root->left=nullptr;
            root->right=cur;
            q.pop();
            root=root->right;
        }
        // return ans;
    }
};