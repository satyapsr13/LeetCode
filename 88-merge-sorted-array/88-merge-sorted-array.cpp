class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int l=m-1;
        int r=n-1;
        int ind=nums1.size()-1;
        if(r==-1)
        {
            return ;
        }
        
        
        while(l>=0 or r>=0)
        {
            if(r==-1)
            {
                return;
            }
            if(l==-1)
            {
                while(r>=0 and ind>=0)
                {
                    nums1[ind]=nums2[r--];
                    ind--;
                }
                return ;
            }
            if(nums1[l]>nums2[r])
            {
                nums1[ind]=nums1[l];
                nums1[l]=0;
                l--;
                ind--;
            }else{
                
                nums1[ind]=nums2[r];
                r--;
                ind--;
            }
            
            
        }
         
        
    }
};