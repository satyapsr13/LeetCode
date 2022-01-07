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
    vector<int>ans;
public:
    vector<int> postorderTraversal(TreeNode* root) {
         stack<TreeNode*>st;
        auto cur=root;
        while(!st.empty()|| cur)
        {
            if(cur)
            { st.push(cur);
                cur=cur->left;
            }else{
                TreeNode* temp=st.top()->right;
                if(temp==nullptr)
                {
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    
                    while(!st.empty() and temp==st.top()->right)
                    {
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->val);
                        
                    }
                    
                }else{
                    cur=temp;
                }
                
            }
        }
    return ans;}
};