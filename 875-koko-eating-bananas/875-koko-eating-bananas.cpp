class Solution {
    bool check(vector<int>&v,int h,int mid)
    {   int req_hours=0;
        for(int i=0;i<v.size();++i)
        {
            
            req_hours+=ceil(v[i]*1.0/mid);
        }
        
     return req_hours<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
   int n=piles.size();
        
        int l=1;
        int ans;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            
            if(check(piles,h,mid))
            {ans=mid;
             r=mid-1;
                
            }
            else{
                l=mid+1;
                ans=l;
            }
        }
        
        
        
        return ans;
    }
};