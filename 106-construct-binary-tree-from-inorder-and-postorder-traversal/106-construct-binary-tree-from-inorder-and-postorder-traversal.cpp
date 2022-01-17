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
     TreeNode * find(vector<int>&in,int instart, int inend,vector<int>&post,int poststart,int postend)
     {
         
         if(instart>inend|| poststart>postend)return nullptr;
         
         TreeNode* root=new TreeNode(post[postend]);
         int inleft=mp[root->val];
         int left=inleft-instart;
         
         root->left=find(in,instart,inleft-1,post,  poststart,poststart+left-1);
         
         root->right=find(in,inleft+1,inend,post,   poststart+left,postend-1);
         
         return root;
         
     }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        for(int i=0;i<inorder.size();++i)
        {
            mp[inorder[i]]=i;
        }
        
        return find(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
        
    }
};