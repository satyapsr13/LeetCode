#define mod 1000000007
class Solution {
    int dp[5001][7][16];
    int find(int n,vector<int>&v,int pre,int count)
    {
        if(n==0){
            // cout<<s<<endl;
            return 1;}
        
        int ans=0;
        if(dp[n][pre][count]!=-1) return dp[n][pre][count];
        for(int i=0;i<6;++i)
        {
               // s.push_back(i+'0');
            
            if(pre==i )
               { 
                if(v[i]>count)
                      { 
                    ans+=(find(n-1,v,i,count+1)%mod);
                    ans=ans%mod;
                }
                  else{
                    // s.pop_back();
                 continue;
                   
               }
               }
            else {ans+=(find(n-1,v,i,1)%mod);
                 ans=ans %mod;
                 }
            
            // s.pop_back();
        }
        
        return dp[n][pre][count]=(ans%mod);
    }
    
public:
    int dieSimulator(int n, vector<int>& rollMax) {
       // string s;
        memset(dp,-1,sizeof(dp));
        
        return find(n,rollMax,6,0)%mod;
    }
};