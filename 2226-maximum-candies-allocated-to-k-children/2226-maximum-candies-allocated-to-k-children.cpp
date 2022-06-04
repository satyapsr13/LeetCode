class Solution {
     bool check(vector<int>&candies,int mid,long long k)
     {
         long long sum=0;
         if(mid==0)return 0;
         for(auto &it:candies)
         {
             sum+= int(it/mid);
             
             if(sum>=k)
             {   
                 // cout<<sum<<" "<<mid<<endl;
        
                 return 1;
             }
         }
         // cout<<sum<<" "<<mid<<endl;
        
    return 0; 
         
     }
    public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int n=candies.size();
        int l=0,r=INT_MAX;
         long long sum=0;
        for(auto &it:candies )
        {
            sum+=it;
        }
        if(sum<k)
        {
            return 0;
        }
        int ans=0;
        while(l<=r)
        {
            int mid=l+((r-l)/2);
            // cout<<l<<" "<<r<<" ";
            if(check(candies,mid,k))
            {
                ans=mid;
                l=mid+1;
                
            }else{
                r=mid-1;
                ans=r;
                
            }
        }
        return ans;
    }
};