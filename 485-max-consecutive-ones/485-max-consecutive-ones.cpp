class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int ans=0;
        int n=nums.size();
        for(int &el:nums)
        {
            if(el==0)
            {
                sum=0;
            }else{
                sum+=el;
                
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};