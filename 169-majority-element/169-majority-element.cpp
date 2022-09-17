class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count=0;
        int n=nums.size();
        int ans=0;
         for(int j=0;j<31;++j)
            {
          
          count=0;
          
        for(int i=0;i<n;++i)
        {
                if(nums[i]&(1<<j))
                {
                    count++;
                }
                
            }
             // cout<<count<<" "<<j<<endl;
            if(count>((n/2) ) and count>0 )
            {
                ans+=(1<<j);
            }
        }
         
        
        return ans;
    }
};