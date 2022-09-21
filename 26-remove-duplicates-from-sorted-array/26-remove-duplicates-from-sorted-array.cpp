class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int preInd=0,preNum=nums[0];
        
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;++i)
        {
            if(nums[i]==preNum)
            {
                
            }else{
                nums[preInd+1]=nums[i];
                preInd++;
                
                preNum=nums[i];
                count++;
                // cout<<preNum<<" "<<preInd<<endl;
            
            }
        }
       
        return count+1;
    }
};