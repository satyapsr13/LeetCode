class Solution {
    int n;
    int dp[20005];
    unordered_map<int,int>mp;
    int find(int i,int ans)
    {
      if(i>n+4)return 0;
        
        // cout<<i<<" "<<ans<<endl;
        if(dp[i]!=-1) return dp[i];
        
        return  dp[i]= max(find(i+1,ans),find(i+2,ans+(mp[i]*i))+(mp[i]*i));
    
    }
    
    
public:
    int deleteAndEarn(vector<int>& nums) {
        n=*max_element(nums.begin(),nums.end());
    
        cout<<n<<endl;
        memset(dp,-1,sizeof(dp));
        
        for(auto &it:nums)
        {
            mp[it]++;
        }
            
        
        
        return  find(1,0);
        
        
    }
};