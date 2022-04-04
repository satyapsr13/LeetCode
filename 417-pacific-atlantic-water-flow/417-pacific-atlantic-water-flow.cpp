class Solution {
    vector<vector<int>> ans;
int n,m;
    bool isInside(int x,int y)
        
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    void dfs(vector<vector<int>>&v,vector<vector<bool>>&vis,int x,int y)
    {
        
        for(int i=0;i<4;++i)
        {
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(isInside(new_x,new_y))
            {
                
                if(v[new_x][new_y]>=v[x][y] and vis[new_x][new_y]==0 )
                {
                    vis[new_x][new_y]=1;
                    dfs(v,vis,new_x,new_y);
                    
                }
                
            }
            
            
        }
        
        
        
        
        
    
    
    
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
           
        n=heights.size();
        m=heights[0].size();
            vector<vector<bool>>vis1;
    
    vector<vector<bool>>vis2;
    
        vis1.resize(n,vector<bool>(m,0));
        vis2.resize(n,vector<bool>(m,0));
        
        for(int i=0;i<n;++i)
        {
            vis1[i][0]=1;
            vis2[i][m-1]=1;
        } for(int i=0;i<m;++i)
        {
            vis1[0][i]=1;
            vis2[n-1][i]=1;
        }
         for(int i=0;i<n;++i)
        {
 dfs(heights,vis1,i,0);
             
 dfs(heights,vis2,i,m-1);
             
        } for(int i=0;i<m;++i)
        {

 dfs(heights,vis1,0,i);
 
 dfs(heights,vis2,n-1,i);       }
        

        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
            {
                if(vis1[i][j]&vis2[i][j])
                    ans.push_back({i,j});
            }
        
        return ans;
    }
};