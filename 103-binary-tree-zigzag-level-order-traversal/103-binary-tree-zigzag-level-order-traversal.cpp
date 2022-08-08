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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(root==nullptr)return ans;
        
        queue<TreeNode*>q;
        
        TreeNode*temp=new TreeNode(100000 );
        q.push(temp);
        q.push(root);
        q.push(temp);
        // bool l=1;
        ans.push_back({root->val});
        while(!q.empty()){
            
            q.pop();
            // l=1;
            vector<int>v;
            while(q.front()!=temp)
            {
                // l=0;
                TreeNode* a=q.front();
                q.pop();
                if(a->left)
                {
                    q.push(a->left);
                    v.push_back(a->left->val);
                }
                if(a->right)
                {
                    q.push(a->right);
                    v.push_back(a->right->val);
                }
                
            }
            q.push(temp);
            if(v.size()==0)
            {
                break;
            }
            ans.push_back(v);
        }
        int tt=0;
        for(int i=0;i<ans.size();++i)
        {
            if(tt&1)
            {
                reverse(ans[i].begin(),ans[i].end());
            }
            tt++;
        }
        
        return ans;
        
        
    }
};