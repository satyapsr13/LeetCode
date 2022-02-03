class Solution {
    int n;
    int count=0;
    unordered_map<string,bool>mp;
    int dp[301][301];
    bool find(string &s,int l,int r)
    { 
        // if(l==n)return true;
        
     string t=s.substr(l,r-l);
     // cout<<count++<<endl;
        if(r==n and mp[t])return true;
        if(r==n and !mp[t])return false;
        if(dp[l][r]!=-1)return  dp[l][r];
     if(mp[t])
     {
        
         return dp[l][r]= find(s,l,r+1)||find(s,r,r+1);
     }
        else{
         
         return dp[l][r]= find(s,l,r+1);
     
        }
        
        
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
        
        memset(dp,-1,sizeof(dp));
        for(auto &it:wordDict)
        {
            mp[it]=true;
        }
        
        return find(s,0,1);
        
    }
};