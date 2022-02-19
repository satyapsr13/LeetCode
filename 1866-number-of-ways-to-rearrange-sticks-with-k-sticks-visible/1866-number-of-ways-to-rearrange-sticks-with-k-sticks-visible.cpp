#define mod 1000000007
class Solution {
    long dp[1001][1001];
    long find(int n,int k)
    {
        if(n==k)return 1;
        if(n < k || k == 0) return 0;
        // if(i==0)return 1;
        if(dp[n][k]!=-1)return dp[n][k];
        long ans=0;
        ans=(find(n-1,k-1))%mod;
        ans=ans%mod;
        
        ans+=((n-1)*((find(n-1,k)%mod)))%mod;
        ans=ans%mod;
              
        return dp[n][k]= ans;
  // return ans;
    
    }
    
public:
    int rearrangeSticks(int n, int k) {
        
        
        if(n==k)return 1;
        
        memset(dp,-1,sizeof(dp));
        return find(n,k)%mod;
        
    }
};