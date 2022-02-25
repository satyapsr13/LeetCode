class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        
        bool l=1;
        int target=888;
        for(int i=n-1;i>0;--i)
            
        {
            if(nums[i]>nums[i-1])
            {
               target=i-1;
                break;
            }
        } 
        
        if(target==888)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        sort(nums.begin()+target+1,nums.end());
       
        auto it=upper_bound(nums.begin()+target+1,nums.end(),nums[target])-nums.begin();
        
        swap(nums[target],nums[it]);
        
            // reverse(nums.begin(),nums.end());
          
    }
};