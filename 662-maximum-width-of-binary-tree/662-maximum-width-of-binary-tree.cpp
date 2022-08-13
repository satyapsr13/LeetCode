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
#define ll unsigned int
class Solution {
    
public:
    int widthOfBinaryTree(TreeNode* root) {
         TreeNode* separator=new TreeNode(200);
        
        queue<pair<TreeNode*,ll>>q;
        q.push({root,1});
        q.push({separator,0});
        ll ans=1;
        ll level=0;
        bool lll=1;
        while(!q.empty())
        {
            ++level;
            lll=1;
            ll l=q.front().second,r=0;
            while(q.front().first!=separator)
            {lll=0;
                pair<TreeNode*,ll> top=q.front();
                q.pop();
                r=top.second;
                if(top.first->left)
                {
                    q.push({top.first->left,(top.second*2)});
                    
                }
                  if(top.first->right)
                {
                    q.push({top.first->right,(top.second*2)+1});
                }
                
            }
            // cout<<"level:- "<<level<<" "<<l<<" "<<r<<endl;
            if(lll)
                break;
            ans=max(ans,r-l+1);
            
            q.push({separator,0});
            q.pop();
        }        
        return ans;
    }
};



