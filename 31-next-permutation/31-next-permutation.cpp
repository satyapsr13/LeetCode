class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int ind=-1;
        
        int n=nums.size();
        
        for(int i=n-1;i>0;--i)
        {
            if(nums[i]>nums[i-1])
            {
                ind=i;
                break;
            }
            
        }
        if(ind==-1)
        {
              reverse(nums.begin(),nums.end());
            return ;
        }
        reverse(nums.begin()+ind,nums.end());
        int l=upper_bound(nums.begin()+ind,nums.end(),nums[ind-1])-nums.begin();
        swap( nums[ind-1],nums[l]);
        
        
    }
};