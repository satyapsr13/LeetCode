class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
         
        int l=nums[0];
        int r= nums[0];
        
        do{
            l=nums[l];
            r=nums[nums[r]];
            
            
            
            
        }while( l!=r );
        l=nums[0];
        while( l!=r )
       {
            l=nums[l];
            r=nums[r];
            
            
            
            
        }
        
        
        return l;
    }
};