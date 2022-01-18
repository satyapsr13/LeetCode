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
    bool find(TreeNode* root)
    {
        if(root==nullptr)return 0;
        if(root->val==1 and root->left== nullptr and root->right==nullptr)return 1;
        if(root->val!=1 and root->left== nullptr and root->right==nullptr){
         root=nullptr;
         return 0;}     

        auto l=find(root->left);
        
        auto r=find(root->right);
        // if()
        if(l==0)root->left=nullptr;
        if(r==0)root->right=nullptr;
        if(root->val==1||l||r)return 1;
         else {
            root=nullptr;
            return 0;}
    
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
  bool l= find(root);
        if(!l)return nullptr;
        return root ;
    }
};