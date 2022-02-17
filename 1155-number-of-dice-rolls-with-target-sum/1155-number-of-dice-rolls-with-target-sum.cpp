#define mod 1000000007
class Solution {
    int total;
    int dp[31][1001];
    int find(int n,int k,int target)
    {
        if(n==0) return target==0;
        if(target<0)return 0;
        // if(target==)
        if(dp[n][target]!=-1)return dp[n][target]; 
        int ans=0;
        for(int i=1;i<=k;++i)
        {
            ans+=(find(n-1,k,target-i)%mod);
            ans=ans %mod;
        }
        
        return dp[n][target]= ans%mod;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        total=target;
        memset(dp,-1,sizeof(dp));
        return find(n,k,target)%mod;
    }
};