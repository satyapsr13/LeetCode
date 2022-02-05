class Solution {
    
    int check(vector<int>&v,int mid)
    {
        int count=0;
        for(auto &it:v)
          count+=(it<=mid);
        return count>mid;
    }
public:
    int findDuplicate(vector<int>& v) {
     
        
        int l=*min_element(v.begin(),v.end());
        int r=*max_element(v.begin(),v.end());
            
  int ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(check(v,mid))
            {ans=mid;
                // return mid;
                r=mid-1;
            }else{
                
                l=mid+1;
                ans=l;
            }
            
        }
            return  ans;
    }
};