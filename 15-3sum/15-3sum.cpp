class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        
       sort(nums.begin(),nums.end()); 
        int lastI=1000000;
        for(int i=0;i<n-2;++i)
        {
            // int sum=nums[i];
                
            int l=i+1,r=n-1;
            bool ll=false;
            
            while(l<r )
            {
                int sum2=nums[l]+nums[r]+nums[i];
                // cout<<l<<" "<<r<<" "<<i<<endl;
                if(sum2>0)
                {
                    r--;
                }else if(sum2<0)
                {
                    l++;
                }else{
                    
                    vector<int>temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[l];
                    temp[2]=nums[r];
                    lastI=  temp[0];
                    ll=true;
                   
                    while(nums[l]==temp[1] and l<r)l++;
                    // l++;
                    // r--;
                    while(nums[r]==temp[2] and r>l)r--;
                     
                    ans.push_back(temp);
                    
                }
            }
            
            
            if(ll)
              { 
                  ll=false;
                  while(nums[i]==lastI ){
                      i++;   
                         ll=true;
                      if(i>=n)
                          break;
                   
                  }
                  if(ll)
                    i--;
                  
               }
        }
     
        return ans;
    }
};