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
    vector<int>ans;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr)
            return ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {TreeNode* cur=st.top();
         st.pop();
            ans.push_back(cur->val);
            if(cur->right)
                st.push(cur->right);
            if(cur->left)
             st.push(cur->left);
        }
            
            return ans;
    }
};