class Solution {
    int n,m;
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
    
    // int dp[101][101]={-1};
    vector<vector<int>>dp;
    int find(int x,int y)
    {
        if(x==n-1 and y==m-1)
        {
            return 1;
        }
        
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        
        int l=0;
        
        
        if((y+1)<m  )
        { 
            // cout<<x<<" "<<y<<endl;
        
            l=find(x,y+1);
        }
        if((x+1)<n  )
        {
            l+=find(x+1,y);
        }
        
        return dp[x][y]= l;
    }
public:
    int uniquePaths(int m1, int n1) {
        n=m1;
        m=n1;
        
        dp.resize(n,vector<int>(m,-1));
        
    return find(0,0);    
        
        
         
    }
};