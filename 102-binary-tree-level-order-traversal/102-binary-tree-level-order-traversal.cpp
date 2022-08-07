 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        queue<TreeNode*>q;
        TreeNode *temp=new TreeNode(11111);
        
        if(!root)return ans;
        q.push(temp);
        q.push(root);
        q.push(temp);
        bool l=false;
        while(!q.empty()  )
        {
            // TreeNode * first=q.top();
            q.pop();
                vector<int>v;
            l=false;
            while(q.front()!=temp)
            {
                l=true;
                TreeNode* first=q.front();
                q.pop();
                if(first)
                {
                // cout<<first->val<<" ";
                v.push_back(first->val);
                if(first->left)
                {
                    q.push(first->left);
                }
                if(first->right)
                {
                    q.push(first->right);
                }
                
            }}
            
            if(!l)
            {
                break;
            }
            cout<<endl;
            q.push(temp);
            ans.push_back(v);
            
        }
        
        
        return ans;
    }
};



