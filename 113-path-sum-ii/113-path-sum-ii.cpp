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
    vector<vector<int>>ans;
    void find(TreeNode* root,int sum,vector<int>a)
    {
        if(root==nullptr)return;
        if(root->left==nullptr and root->right==nullptr and root->val==sum)
        { a.push_back(root->val);
            ans.push_back(a);
        }
        a.push_back(root->val);
        
         find(root->left,sum-root->val,a);
        
        find(root->right,sum-root->val,a);
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>a;
        find(root,targetSum,a);
        return ans;
    }
};