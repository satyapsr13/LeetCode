class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        if(n==0)
          return 0;
        int ans=1; 
        int l=0,r=1;
int count=1;       
        for(int i=0;i<n-1;++i)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            if(nums[i]+1==nums[i+1])
            { count++;
                
            }else{ count=1;}
          ans=max(ans,count);
        
        }
            
        return ans;
    }
};