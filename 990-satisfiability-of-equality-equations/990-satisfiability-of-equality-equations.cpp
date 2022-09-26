class Solution {
    
     vector<int>parent;
    int findParent(int x)
    {
        return parent[x]==x?x:findParent(parent[x]); 
    }
public:
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26,-1);
        
        for(int i=0;i<26;++i)
            parent[i]=i;
       int arr[27]={-1};
        
        int n=equations.size();
         
        for(auto &it:equations)
        {
            if(it[1]=='=')
            {
                
                parent[findParent(it[0]-'a')]=findParent(it[3]-'a');
                
            }
        }
        for(auto &it:equations)
        {
            if(it[1]=='!' and (findParent(it[0]-'a')==findParent(it[3]-'a')))
            {
                return false;
                
                // parent[findParent(it[0]-'a')]=findParent(it[3]-'a');
                
            }
        }
        
         
        
        return true;
    }
};