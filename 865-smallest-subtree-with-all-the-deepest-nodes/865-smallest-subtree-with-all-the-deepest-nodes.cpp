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
class Node1{
    public:
    TreeNode* node;
    
    // TreeNode* node;
    int height;
    Node1()
    {
        node=nullptr;
        height=0;
    }
};
class Solution {
    TreeNode* ans;
    
    Node1 find(TreeNode* root)
    {
        if(root==nullptr){
        Node1 temp;
            // temp.height=0;
            return temp;
        }
        
      Node1 l=  find(root->left);
        
      Node1 r=  find(root->right);
       Node1 mres;
        
        mres.height=max(l.height,r.height)+1;
        mres.node=root;
        if(l.height>r.height)
         {
             mres.node=l.node;
         }
         if(l.height<r.height)
         {
             mres.node=r.node;
         }
        
        return mres;
    }
    
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        
       Node1 ans= find(root);
        return ans.node;
    }
};