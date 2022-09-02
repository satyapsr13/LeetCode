#define vvi vector<vector<int>>
class Solution {
    unordered_map<int,int>subtreeSize;
    // unordered_map<int,int>subtreeSize;
   vector<int>ans;
    // bool vis[1000]={0};
    vector<bool>vis;
    int countSubtree(vvi & v,int node)
    {
        
        int count=0;
        vis[node]=1;
        for(int i=0;i<v[node].size();++i)
        {
            if(!vis[v[node][i]] )
              count+=countSubtree(v,v[node][i]);
                  
        }
        subtreeSize[node]=count;
        return count+1;
        
        
    }
    
    int findDistanceForRootNode(vvi & v,int node,int level)
    {
        
        vis[node]=0;
        int ans=0;
        for(int i=0;i<v[node].size();++i)
        {
            if(vis[v[node][i]])
            {
            // cout<<v[node][i]<<" "<<level<<endl;
                ans+=findDistanceForRootNode(v,v[node][i],level+1)+level;
            }
            
           
        }
        
        
        return ans;
    }
     
    
    void findAns(vvi &v,int node,int n)
    {
        vis[node]=1;
         
       for(int i=0;i<v[node].size();++i)
       {
           if(!vis[v[node][i]])
        {   ans[v[node][i]]=ans[node]+ n-( 2*( subtreeSize[v[node][i] ]+1));
           
           findAns(v,v[node][i],n);
        }   
       }
    }
    
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
      vvi graph(n);
        vis.resize(n,false);
        // vector<int>ans;
        ans.resize(n,0);
        for(auto &it:edges)// make graph
        {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        int t= countSubtree(graph,0); // call function to count subtree
        
        // vis.resize(n,false);
        
        // for(auto &it:subtreeSize)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        
         ans[0]=findDistanceForRootNode(graph,0,1);
        
        
        
        findAns(graph,0,n);
        
        return ans;
    }
};