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
    // vector<int>tree;
    unordered_map<int,TreeNode*>mp;
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
     // tree.resize(100000,-1);
        int tree[10000000]={0};
      TreeNode* ans=root;
        TreeNode* seperator=new TreeNode(5000);
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        q.push({seperator,0});
        bool isLastNode=0;
        while(!q.empty())
        {
            vector<int>v;
            isLastNode=1;
            while(q.front().first!=seperator)
            { 
                pair<TreeNode*,int>a=q.front();
                q.pop(); 
                
                TreeNode* node=a.first;
                
                int index=a.second;
                v.push_back(index);
                
                mp[index]=node;
                
                tree[index]=node->val;
                    if(node->left)
                    {   
                    isLastNode=0;
                    q.push({node->left,index*2});
                    }
                
                    if(node->right)
                    { 
                      isLastNode=0;
                      q.push({node->right,(index*2)+1});
                    }
                
                
            }
            if(isLastNode)
            {
                int count=2,prev;
                while(count!=1)
                {
                  count=1;
                   prev=v[0];
            
                   for(int i=1;i<v.size();++i)
                   {
                    if(v[i]!=prev)
                    {
                        count++;
                        break;
                    }
                   
               
                   }
                   if(count>1)
                   {
                       for(int i=0;i<v.size();++i)
                       { 
                        v[i]/=2;
               
                       }
                       
                   }
               }
                 
                ans=mp[v[0]];                
             break;
            }
            q.push({seperator,0});
            q.pop();
            
        }
        
        
        return ans;
    }
};
