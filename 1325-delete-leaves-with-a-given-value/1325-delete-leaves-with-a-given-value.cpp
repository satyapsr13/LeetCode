/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right):val(x),left(left),right(right) {}
 * };
 */
class Solution {
    bool find(TreeNode* &root,int target,int t)
    {
        
        if(root==nullptr)
        {return 1;
            
        }
        
        bool l=find(root->left,target,t+1);
        bool r=find(root->right,target,t+1);
        
        if(root->val==target and l and r)
        {
            // cout<<t<<endl;
             root=nullptr;
            return 1;
            
        }
        
        return false;
        
        
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
   
        bool l=find(root,target,0);
       // root->left=nullptr;  
          return root;   
    }
};


