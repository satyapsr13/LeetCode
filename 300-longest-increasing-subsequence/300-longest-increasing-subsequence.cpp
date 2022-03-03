class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            auto x=lower_bound(dp.begin(),dp.end(),nums[i]);
            
            if(x==dp.end())
                dp.push_back(nums[i]);
            else{
                
              *x=nums[i];   
            }
            
            
        }
        int t=dp.size();
        return t;
    }
};