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
    vector<int>ans;
public:
    vector<int> preorder(Node* root) {
        
        if(root==nullptr)return ans;
        stack<Node*>st;
        st.push(root);
        while(!st.empty())
        {
            auto cur=st.top();
            ans.push_back(cur->val);
               st.pop();     
            for(int i=cur->children.size()-1;i>=0;--i)
            { st.push(cur->children[i]);
                
            }
        }       
        
        
        
        return ans;
    }
};