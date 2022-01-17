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
    int n,m;
    unordered_map<int,int>mp;
    TreeNode* find(vector<int>& pre,vector<int>& in,int prestart,int preend,int instart,int inend  )
    {
        if(prestart>preend|| instart>inend)return nullptr;
        TreeNode* root=new TreeNode(pre[prestart]); 
        int inroot=mp[root->val];
        int numleft=inroot-instart;
        
        root->left=find(pre,in,prestart+1, prestart+numleft,instart,inroot-1);
        root->right=find(pre,in, prestart+numleft+1,preend,inroot+1,inend);
        
        // root->right=find(pre,in,)
        
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        n=preorder.size();
        m=inorder.size();
        
        for(int i=0;i<m;++i)
            mp[inorder[i]]=i;
        
        
        return find(preorder,inorder,0,n-1,0,m-1);
        
    }
};