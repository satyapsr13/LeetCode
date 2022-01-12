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
    unordered_map<int,int>mp;
    void find(TreeNode*root,int h)
    {
        // mp[h]
        if(root==nullptr)return;
        if(mp[h]==INT_MIN)mp[h]=root->val;
        
        find(root->right,h+1);
        find(root->left,h+1);
    }
    vector<int>ans;
public:
    vector<int> rightSideView(TreeNode* root) {
        for(int i=0;i<101;++i)
        {
            mp[i]=INT_MIN;
        }
        find(root,1);
        int i=1;
        while(mp[i++]!=INT_MIN)
        {
            ans.push_back(mp[i-1]);
        }
        return ans;
    }
};