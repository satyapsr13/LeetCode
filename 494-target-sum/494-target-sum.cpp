class Solution {
    int ans=0;
    int n;
    int dp[21][3000];
    int tt;
    int find(vector<int>&nums,int t,int i)
    {
        if(i>=n and (t==tt))
        {
            // ans++;
            return 1;
        }
        if(i>=n)
            return 0;
        
        if(dp[i][1000+t]!=-1)return dp[i][1000+t];
       
        
        return dp[i][1000+t]= find(nums,t-nums[i],i+1)+find(nums,t+nums[i],i+1);
    
    }
        
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        tt=target;
        n=nums.size();
        
        memset(dp,-1,sizeof(dp));
        n=find(nums,0,0);
        
        return n;
    }
};