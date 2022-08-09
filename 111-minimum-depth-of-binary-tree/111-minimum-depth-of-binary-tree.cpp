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
    int minDepth(TreeNode* root) {
        TreeNode*temp=new TreeNode(100000);
        queue<TreeNode*>q;
        if(root==nullptr)return 0;
        q.push(temp);
        q.push(root);
        q.push(temp);
        int count=0;
        
        while(!q.empty())
        {
            q.pop();
            count++;
            while(q.front()!=temp)
            {
                TreeNode* qTop=q.front();
                q.pop();
                
                if(qTop->left==nullptr and qTop->right==nullptr)
                {
                    return count;
                }
                else{
                    if(qTop->left)
                    {
                        q.push(qTop->left);
                    }               
                    if(qTop->right)
                    {
                        q.push(qTop->right);
                    }
                }
                
                
            }
            q.push(temp);
        }
        
        
        return 0;
        
    }
};



