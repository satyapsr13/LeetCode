class Solution {
    int n,m;
    int dx[4]={0,0,1,-1};
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
    int dy[4]={-1,1,0,0};
    int dfs(vector<vector<int>>&v,int x,int y)
    {
        
        v[x][y]=2;
            int ans=0;
         
        for(int i=0;i<4;++i)
        {
           int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(isInside(new_x,new_y))
            {
                if(v[new_x][new_y]==1)
                {
                    ans+=  dfs(v,new_x,new_y);
                }
            }            
         }
       return ans+1;
        
        
        return 0;
    
    
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                
                if(grid[i][j]==1)
     {           ans=max(ans,dfs(grid,i,j));
      
     
     }
            }
        }
        
        return ans;
    }
};