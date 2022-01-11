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
priority_queue<int,vector<int>,greater<int>>pq;
    void find(TreeNode*root)
    {
        if(root==nullptr)return;
        find(root->left);
        pq.push(root->val);
        find(root->right);
    }
    public:
    int kthSmallest(TreeNode* root, int k) {
     // k++;
        find(root);
        while(--k)
        {
            pq.pop();
        }
        return pq.top();
    }
};