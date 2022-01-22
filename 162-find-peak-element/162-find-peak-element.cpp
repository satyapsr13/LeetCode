class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        if(n==1)return 0;
       int ans;
       
       if(nums[1]<nums[0])return 0;
       if(nums[n-2]<nums[n-1])return n-1;
           
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            
           
            if(nums[mid]<nums[mid+1])
            {   
                
                l=mid+1;
                ans=l;
                
            }
            else if(nums[mid]>nums[mid+1])
            {
                ans=mid;
             r=mid-1;
                
            }
        }
        
    return ans;
    }
};