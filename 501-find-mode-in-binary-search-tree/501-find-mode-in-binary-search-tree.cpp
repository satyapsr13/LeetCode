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
    map<int,int,greater<int>>mp;
    priority_queue<pair<int,int>>pq;
    void preorder(TreeNode*root)
    {
        if(root==nullptr)return;
        preorder(root->left);
        mp[root->val]++;
        
        preorder(root->right);
    }
    
public:
    vector<int> findMode(TreeNode* root) {
        preorder(root);
        
        
        vector<int>ans;
        int t;
            
     for(auto &it:mp)
     {
         pq.push({it.second,it.first});
     }
        t=pq.top().first;
        while(!pq.empty())
        {
            int cur=pq.top().second;
            int fre=pq.top().first;
            if(fre!=t)
                break;
            pq.pop();
            ans.push_back(cur);
        }
        
        return ans;
    }
};