class Solution {
    int n;
public:
    int minPairSum(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        int mn=INT_MIN;
        while(l<r)
        {
            mn=max(mn, nums[l]+nums[r] );
            l++;
            r--;
        }
        
        return mn;
    }
};