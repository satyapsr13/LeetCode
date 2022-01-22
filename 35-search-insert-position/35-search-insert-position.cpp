class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
        int ans;
        int l=0  , r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(nums[mid]==target)return mid;
            if(nums[mid]>target)
            {ans=mid;
                r=mid-1;
                
            }else{
                
                l=mid+1;
            ans=l;
            }
        }
         return ans;
        // return r;
    }
};