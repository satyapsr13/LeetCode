class TreeAncestor {
public:
    vector<vector<int>>dp;
    TreeAncestor(int n, vector<int>& parent) {
         dp.resize(18,vector<int>(n,-1));
        for(int i=0;i<parent.size();++i)
            dp[0][i]=parent[i];
        for(int i=1;i<18;++i)
        {
            for(int j=0;j<n;++j)
            {
                int temp=dp[i-1][j];
                if(temp==-1)dp[i][j]=-1;
                  else dp[i][j]=dp[i-1][temp];
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        int current=node;
        for(int i=0;i<18;++i)
        {
            if(k&(1<<i))
            {
                current=dp[i][current];
               if(current==-1)return -1;
            }

        }
        return current;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */