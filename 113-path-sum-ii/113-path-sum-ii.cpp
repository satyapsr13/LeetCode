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
    
    void dfs(TreeNode* root ,int targetSum,vector<int>v,int curSum)
    {
        if(root==NULL)
          return ;
        if(root->left==NULL and root->right==NULL)
        {   
            if(targetSum==curSum+root->val)
            { v.push_back(root->val);
                 ans.push_back(v);
             }
        }
        
        curSum+=root->val;
        v.push_back(root->val);
         
        if(root->left)
         dfs(root->left,targetSum,v,curSum);
        
        
        if(root->right)
         dfs(root->right,targetSum,v,curSum);
    }
    
    public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<int>temp;
         dfs(root,targetSum,temp,0);
        
        return ans;
        
    }
};