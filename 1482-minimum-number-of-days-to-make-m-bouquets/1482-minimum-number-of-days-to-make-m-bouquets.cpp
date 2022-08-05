class Solution {
    int n;
    bool find(vector<int>&v,int m,int k,int mid)
    {  
        int count=0;
        int sum=0;
        for(int i=0;i<n;++i)
        {
            if(v[i]>mid)
            {
                count=0;
                continue;
            }
            count++;
            if(count==k)
            {
                sum++;
                count=0;
            }
            
            
        }
                    // cout<<mid<<" "<<sum<<endl;
        
        
        return sum>=m;
        
        
    }
    
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
         n=bloomDay.size();
        
        if(n<m*k)return -1;
        
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;++i)
        
        {
            mx=max(mx,bloomDay[i]);
            mn=min(mn,bloomDay[i]);
            
        }
        int l=mn;
        int r=mx;
        
        int ans=-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            

            if(find(bloomDay,m,k,mid))
            {ans=mid;
             r=mid-1;
                
            }else{
                l=mid+1;
                ans=l;
                
            }
            
            
        }
        
        return ans;
    }
};