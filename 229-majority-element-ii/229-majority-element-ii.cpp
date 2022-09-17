class Solution {
    vector<int>ans;
    int n;
public:
    vector<int> majorityElement(vector<int>& nums) {
        n=nums.size();
        
        int x=-1,y=-1;
        int c1=0,c2=0;
        
         for(int i=0;i<n;++i)
         {
             int el=nums[i];
 
             if(el==x)
             {
                 c1++;
             }else if(el==y)
             {
                 c2++;
             }else if(c1==0)
             {
                 x=el;
                 c1++;
             }else if(c2==0)
             {
                 y=el;
                 c2++;
             }else{
                 c1--;
                 c2--;
             }
         }
        
    c1=0;
        c2=0;
        for(int i=0;i<n;++i)
        {
            if(nums[i]==x)
            {
                c1++;
            }
            
            if(nums[i]==y)
            {
                c2++;
            }
        }
        
        if(c1>(n/3))
        {
            ans.push_back(x);
        }
        
        if(c2>(n/3) and x!=y)
        {
            ans.push_back(y);
        }
        return ans;
    }
};