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
#define pii pair<int,int>
class Solution {
    priority_queue<pii>pq;
    queue<TreeNode*>q;
    
public:
    int maxLevelSum(TreeNode* root) {
    
        TreeNode *dummy=new TreeNode(1111111);
        
        q.push(root);
        q.push(dummy);
        int height=1;
        while(q.front()!=dummy and !q.empty())
        {
            // cout<<q.front()->val<<endl;
          int sum=0;
            while(q.front()!=dummy and !q.empty())
            {  
                TreeNode* cur=q.front();
                q.pop();
                sum+=cur->val;
                cout<<cur->val<<" ";
                if(cur->left)
                q.push(cur->left);
                if(cur->right)
                q.push(cur->right);
            }
            q.push(dummy);
            // cout<<q.front()->val<<" ";
            q.pop();
            pq.push({sum,height++});
            
            
        }
        int ans=0;
        int sum=pq.top().first;
        while(!pq.empty())
        { pii a=pq.top();
          pq.pop();
          cout<<a.first<<" ";
         if(a.first==sum)
             ans=a.second;
         // else break;   
         // if(p)
        }
    return ans;
    }
};