
#define mod 1000000007
class Solution {
     int dp[501][504];

    int find(int n,int arrLen,int val)
    {
        if(n<=0  and val==0){
            // cout<<s<<endl;
            return 1;
        }
        
        if(n<=0  )return 0;
        if(val<0)return 0;
        if(dp[n][val]!=-1)return dp[n][val];
        
        if(val>=arrLen)return 0;
        if(val>252)return 0;
        int ans=0;
        
        if(val>0){
        // s.push_back(val-1+'0');
        ans+=(find(n-1,arrLen,val-1)%mod);
        // s.pop_back();
            ans=ans%mod;
        }
        // s.push_back(val+1+'0');
        ans+=(find(n-1,arrLen,val+1)%mod);
        ans=ans%mod;
        // s.pop_back();
        
        // s.push_back(val+'0');
        ans+=(find(n-1,arrLen,val)%mod);
        ans=ans%mod;
        // s.pop_back();
        
        return dp[n][val]= ans%mod;
    }
    
public:
    int numWays(int steps, int arrLen) {
    memset(dp,-1,sizeof(dp));
        string s;
        return find(steps,arrLen,0)%mod;
    }
};