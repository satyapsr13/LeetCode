class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        
        int count=0;
        bool l=1;
        while(l)
        {
            l=0;
            for(int i=0;i<nums.size();++i)
            {
                if(nums[i]&1)
                {
                    nums[i]--;
                    count++;
                }
                if(nums[i]>0)
                    l=1;
                nums[i]=nums[i]/2;
              
            }
            if(l==0)
                return count;
              count++;
            
        }
        return 0;
    }
};