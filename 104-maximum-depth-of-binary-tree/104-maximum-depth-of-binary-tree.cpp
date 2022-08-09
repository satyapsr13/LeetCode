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
    int maxDepth(TreeNode* root) {
        TreeNode*temp=new TreeNode(100000);
        queue<TreeNode*>q;
        if(root==nullptr)return 0;
        q.push(temp);
        q.push(root);
        q.push(temp);
        int count=0;
        bool l=false;
        while(!q.empty())
        {
            // cout<<q.front()->val<<endl;
            q.pop();
            count++;
            l=false;
            while(q.front()!=temp)
            {
                l=true;
                TreeNode* qTop=q.front();
                
            // cout<<q.front()->val<<endl;
                q.pop();
                
 
 
                    if(qTop->left)
                        q.push(qTop->left);
                                   
                    if(qTop->right)
                        q.push(qTop->right);
                    
    
            }
            q.push(temp);
           if(!l)
             break;
            
            
        }
        
        
        return count-1;
        
    }
};



