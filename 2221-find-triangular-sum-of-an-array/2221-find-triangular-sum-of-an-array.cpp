class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        
        while(n>1)
        {
            for(int i=0;i<n-1;++i)
            {
                nums[i]=(nums[i]+nums[i+1])%10;
                
            }
//             for(int i=0;i<n;++i)
//             {
//                 // nums[i]=(nums[i]+nums[i+1])%10;
                
//                 cout<<nums[i]<<" ";
//             }
            // cout<<endl;
           
            n--;
        }
        
        
        
        return nums[0];
        
    }
};