class Solution {
public:
    
    bool isSame(TreeNode* root1, TreeNode* root2){
		//base cases
        if (root1 == nullptr && root2 == nullptr) return true;
        if (root1 == nullptr || root2 == nullptr) return false;
        
        return root1->val == root2-> val &&
            isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
    }
    
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) return false;
    
        
        
        
        return isSame(root, subRoot) || 
            isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};