class Node{
   public:
    int x,y, cross;
    Node(int _x,int _y ,int _cross)
    {
        x=_x;
        y=_y; 
        cross=_cross;
    }};


class Solution {
    
    int n,m;
    bool isInside(int x,int y)
    {
        return x>=0 and x<n and y>=0 and y<m;
    }
    int dx[4]={0,0,1,-1};
    
    int dy[4]={1,-1,0,0};
     vector<vector<bool>>vis;
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        
        n=grid.size();
        m=grid[0].size();
        vis.resize(n,vector<bool>(m,false));
         deque<Node>q;
        q.push_front(Node(0,0, grid[0][0]));
         vis[0][0]=1;
        while(!q.empty())
        {
            Node top=q.front();
            q.pop_front();
            int x=top.x;
            int y=top.y;
             int cross=top.cross;
            // vis[x][y]=1;
             if(x==n-1 and y==m-1)return cross;
            
            for(int  i=0;i<4;++i)
            {
                int new_x=x+dx[i];
                int new_y=y+dy[i];
                if(isInside(new_x,new_y))
                {
                    if(!vis[new_x][new_y])
                    {
                        if(grid[new_x][new_y])
                    {
                         vis[new_x][new_y]=1;
                            q.push_back(Node(new_x,new_y, cross+grid[new_x][new_y]));
                  
             if(new_x==n-1 and new_y==m-1)return cross;
                            
                    }else{
                            
                         vis[new_x][new_y]=1;
                    q.push_front(Node(new_x,new_y, cross));
                            
             if(new_x==n-1 and new_y==m-1)return cross;
                        }
                    
                    } 
                }
            }
            
        }
        
        
        
        return 0;
    }
};