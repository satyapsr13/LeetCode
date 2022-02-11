class Solution {
    int n;
    int dp[101][101];
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y<n and y>=0;
    }
    
    int find(vector<vector<int>>&v,int x,int y)
    {
        if(x>=n) return 0;
        
        if(dp[x][y]!=-1)return dp[x][y];
        cout<<v[x][y]<<endl;
        int a=0,b=0,c=0;
        if(isInside(x+1,y-1))
        {
            a=find(v,x+1,y-1)+v[x+1][y-1];
            cout<<" a "<<a<<endl;
        }
         if(isInside(x+1,y))
            b=find(v,x+1,y)+v[x+1][y];
            
           if(isInside(x+1,y+1))
        {
            c=find(v,x+1,y+1)+v[x+1][y+1];
              cout<<" c "<<c<<endl;
        }
         
       if(y==0  )
           return min(b,c);
       if(y==n-1)
           return min(b,a);
        
        return dp[x][y]= min({a,b,c});
    }
    
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n=matrix.size();
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
        for(int i=0;i<n;++i)
        {  int t;
            ans= min(ans,find(matrix,0,i)+matrix[0][i]);
        // cout<<t<<endl;
        }
        
        
        return ans;
    }
};