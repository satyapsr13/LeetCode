#define vvi vector<vector<int>>
class Solution {
int n;
    // unordered_map<int,int>mp;
    int dp[201][201];
    int mark=0;
    int find(vvi& v,int i,int height)
    {
        if(height==n)
            return 0;
        int l=find(v,i,height+1);
        int r=find(v,i+1,height+1);
    
        if(dp[height][i]!=-1)return dp[height][i];
        cout<<height<<" "<<i<<"  "<<mark++<<endl;
        return  dp[height][i]= min(l,r)+v[height][i];
   
    
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
      n=triangle.size();  
        // for(int i=0;i<201;++i)
        // {
        //     for(int j=0;j<201;++j)
        //     {
        //         dp[i][j]=INT_MAX;
        //     }
        // }
        memset(dp,-1,sizeof(dp));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;++i)
        {
            for(int j=0;j<i+1;++j)
            {    if(j==i) {dp[i][j]=dp[i-1][j-1]+triangle[i][j];
                     // cout<<dp[i-1][j-1]<<" "<<triangle[i][j]<<endl;
                  continue;
                          }
                
                if(j>0 and j<n-1)
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+triangle[i][j];
                 else if(j==0) dp[i][j]=dp[i-1][j]+triangle[i][j];
                  
            }
          cout<<endl;
        
        }
        // for(int i=0;i<n;++i)
        // {
        //     for(int j=0;j<i+1;++j)
        //     {
        //         // dp[i][j]=min(dp[i-1][j],dp[i-1][i-1])+triangle[i][j];             
        //       cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int mn=*min_element(dp[n-1],dp[n-1]+n);
        return mn;
    }
};