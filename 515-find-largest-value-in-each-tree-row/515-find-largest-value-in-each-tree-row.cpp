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
    queue<TreeNode*>q;
public:
    vector<int> largestValues(TreeNode* root) {
       if(root==nullptr) return ans; 
 
        TreeNode *dummy=new TreeNode();
        
        q.push(root);
        q.push(dummy);
        int height=1;
        while(q.front()!=dummy and !q.empty())
        {
            int sum=INT_MIN;
            bool l=0;
            while(q.front()!=dummy and !q.empty())
            {  l=1;
                TreeNode* cur=q.front();
                q.pop();
                // sum+=cur->val;
                sum=max(sum,cur->val);
                cout<<cur->val<<" ";
                if(cur->left)
                q.push(cur->left);
                if(cur->right)
                q.push(cur->right);
            
             
            }
            q.push(dummy);
            q.pop();
            if(l)
             ans.push_back(sum);
            
            
        }
    return ans;
   
     
            
    }
};