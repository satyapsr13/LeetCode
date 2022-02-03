#define mod 1000000007
class Solution {
      int n;
    int dp[100001][3][4];
    int find( int i,int a,int l)    
    {
        if(i==n)return 1;
         if(dp[i][a][l]!=-1)return dp[i][a][l];
        
        
        if(l==2)
        {        // if we fill A   or   P
        
            if(a!=1)
            return dp[i][a][l]=((find(i+1,a+1,0)%mod)+(find(i+1,a,0)%mod))%mod;   
             
            return dp[i][a][l]=find(i+1,a,0)%mod;
        }else{
            
            if(a==1)
            {      // if we fill L   or   P
                return dp[i][a][l]=(find(i+1,a,l+1)%mod+(find(i+1,a,0)%mod))%mod;
                
            }else{
                
                return dp[i][a][l]= ((find(i+1,a+1,0)%mod+(find(i+1,a,l+1)%mod))%mod+(find(i+1,a,0 )%mod))%mod;
            }
            
        }
    
    
    }   
    
public:
    int checkRecord(int n1) {
        
        n=n1;
        memset(dp,-1,sizeof(dp));
        return find(0,0,0)%mod;
    }
};