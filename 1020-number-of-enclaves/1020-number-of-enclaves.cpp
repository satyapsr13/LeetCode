class Solution {
    
    int n,m;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,-1,1};
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
      // int vis[501][501]={0};
    int count;
    int dfs(vector<vector<int>>&v,int x,int y)
    {
        v[x][y]=0;
        // vis[x][y]=1;
        // cout<<x<<" "<<y<<endl;
        int ans=0;
        for(int i=0;i<4;++i)
        {
            int new_x=x+dx[i];
            int new_y=y+dy[i];
             if(isInside(new_x,new_y))
             {
                 if(v[new_x][new_y]==1 )
                  {
                     
                     ans+=dfs(v,new_x,new_y)+1;
             }}
        
        }
        cout<<count++<<endl;
        return ans;
    }
    
public:
    
    int numEnclaves(vector<vector<int>>& grid) {
        n=grid.size(),m=grid[0].size();
        count=0;
        int total_1=0;
        int border_1=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {  
                total_1+=grid[i][j]==1;   
            }
        }
        
        for(int i=0;i<n;++i)
        {
                     if(grid[i][0]==1)
                    {
                        border_1+=dfs(grid,i,0)+1;
                    }
                    if(grid[i][m-1]==1)
                    {
                        border_1+=dfs(grid,i,m-1)+1;
                    }
              
        }
        
        for(int i=0;i<m;++i)
        {
                     if(grid[0][i]==1)
                    {
                        border_1+=dfs(grid,0,i)+1;
                    }
                   if(grid[n-1][i]==1)
                    {
                        border_1+=dfs(grid,n-1,i)+1;
                    }
              
        }
        
        // for(int i=0;i<n;++i)
        // {
        //     for(int j=0;j<m;++j)
        //         cout<<grid[i][j];
        //     cout<<endl;
        // }
        // cout<<total_1;
        return total_1-border_1;
    }
};