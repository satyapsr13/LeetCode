/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
        queue<Node*>q;
        Node* temp=new Node(1000000);
        q.push(temp);
        q.push(root);
        q.push(temp);
        bool l=false;
        ans.push_back({root->val});
        while(!q.empty())
        {
            l=false;
            q.pop();
            vector<int>v;
            while(q.front()!=temp)
            {
                Node* a=q.front();
                 l=1;
                q.pop();
                for(int i=0;i<a->children.size();++i)
                {
                    if(a->children[i])
                    {
                        q.push(a->children[i]);
                        v.push_back(a->children[i]->val);
                    }
                    
                    
                }
                
                
            }
            
                
                q.push(temp);
            if(v.size()==0)
            {
                break;
            }
            ans.push_back(v);
            
            
            
            
            
        }
        
        return ans;
        }
};