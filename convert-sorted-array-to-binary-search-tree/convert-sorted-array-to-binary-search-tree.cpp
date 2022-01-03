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
    int n;
    TreeNode* find(vector<int>&v,int i,int j )
    {   
       if(i==j )
        return new TreeNode(v[i]);
        if(i>j)
            return nullptr;
        int mid=(i+j)/2;
        cout<<i<<" "<<j<<endl;
        TreeNode* root=new TreeNode(v[mid]);
       root->left=find(v,i,mid-1);
       root->right=find(v,mid+1,j);
        // cout<<v[mid]<<" "<<root->val<<" \n";
    
        return root;
    
     
    }    
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        n=nums.size();
        
        // TreeNode* root ;
        
        return find(nums,0,n-1);
        
        
    }


};