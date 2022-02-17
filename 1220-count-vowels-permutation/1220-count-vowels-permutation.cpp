#define mod 1000000007
class Solution {
    int dp[20001][7];
    int find(int n,int t)
    {
        if(n==1)return 1;
        if(dp[n][t]!=-1)return dp[n][t]%mod;
        if(t==1)
            return dp[n][t]= find(n-1,2)%mod;
        if(t==2)
            return  dp[n][t]= (find(n-1,1)%mod)+(find(n-1,3)%mod);
        if(t==3)
            return dp[n][t]=  ((((find(n-1,1)%mod)+find(n-1,2)%mod)%mod+ find(n-1,4)%mod)%mod+find(n-1,5)%mod)%mod;
        
        if(t==4)
            return  dp[n][t]= (find(n-1,5)%mod+find(n-1,3)%mod)%mod;
        
        
        // if(t==2)
            return  dp[n][t]= find(n-1,1)%mod;
    }
public:
    int countVowelPermutation(int n) {
        int ans=0;
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<6;++i){
            ans+=(find(n,i)%mod);
        ans=ans%mod;
        }
        return ans%mod;
    }
};