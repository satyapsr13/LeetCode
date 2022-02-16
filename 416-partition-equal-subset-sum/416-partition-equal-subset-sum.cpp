class Solution {
    int sum;
    int n;
    int dp[201][10000];
    bool find(vector<int>&v,int i,int rem)
    {  cout<<rem<<endl;
       if(rem==0)return 1;
        if(i==n)return rem==0;
        if(dp[i][rem]!=-1)return dp[i][rem];
        
         if(rem>=v[i])
             return dp[i][rem]=( find(v,i+1,rem-v[i])||find(v,i+1,rem));
         else return  dp[i][rem]= find(v,i+1,rem);
    
    }
    
public:
    bool canPartition(vector<int>& nums) {
        sum=0;
        memset(dp,-1,sizeof(dp));
        for(auto &it:nums)
        {
            sum+=it;
        }
        n=nums.size();
        if(sum&1)return false;
        
        
        return find(nums,0,sum/2);
        
    }
};