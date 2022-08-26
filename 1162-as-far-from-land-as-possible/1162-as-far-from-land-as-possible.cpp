
#define vvi vector<vector<int>>

class Node{
    public:
    int x,y,steps;
    Node(int _steps,int _x,int _y)
    {
        steps=_steps;
          x=_x;
        y=_y;
        // bal=_bal;
    }
}; 
class Solution {
    bool is1=false;
    bool is0=false;
    int n,m;
    
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    bool check(vvi & v)
    {
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(v[i][j]==1)
                {
                    is1=true;
                break;
                }
                
            }
            
            for(int j=0;j<m;++j)
            {
                if(v[i][j]==0)
                {
                    is0=true;
                break;
                }
                
            }
            if(is1 & is0)
                return 1;
        }
        return 0;
    }
        int dis[101][101];
    
    void runbfs(vvi &v,int x,int y)
    { 
        queue<Node>q;
        q.push(Node(0,x,y));
        
        while(!q.empty())
        {
            Node top=q.front();
            q.pop();
            
            int x=top.x;
            int y=top.y;
            int steps=top.steps;
              
            for(int i=0;i<4;++i)
            {
                int new_x=x+dx[i];
                int new_y=y+dy[i];
                if(isInside(new_x,new_y))
                {
                    if(dis[new_x][new_y]>steps+1 and v[new_x][new_y]==0)
                    {
                        q.push(Node(steps+1,new_x,new_y));
                        dis[new_x][new_y]=steps+1 ;
                        
                    }
                    
                }
            }
        }
        
    }
    
public:
    
    
    int maxDistance(vector<vector<int>>& grid) {
       n=grid.size();
        m=grid[0].size();
        if(!check(grid))
        {
         return -1;
        }
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                dis[i][j]=INT_MAX;
            }
        }
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j])
                {
                    dis[i][j]=0;
                    runbfs(grid,i,j);
                }
            }
        }
        
      
        int mx=INT_MIN;
           for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
              mx=max(mx,dis[i][j]);
            }
        }
        
      
        
        return mx;
        
    }
    
    
};