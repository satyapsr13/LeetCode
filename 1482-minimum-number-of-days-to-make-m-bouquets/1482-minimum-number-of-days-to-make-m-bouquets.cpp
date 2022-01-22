class Solution {
    bool check(vector<int>&v,int m,int k,int mid)
    {
        int n=v.size();
        int count=0;
        int total=0;
        for(int i=0;i<n;++i)
        {   
            if(v[i]<=mid)
            { count++;
             if(count==k)
             {count=0;
              total++;
              if(total==m)return 1;
                 
             }
                
            }else{
                count=0;
                
            }
            
            
            
        }
    
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
     
        int n=bloomDay.size();
        if(n<m*k)return -1;
        
        int mx=*max_element(bloomDay.begin(),bloomDay.end());
        int l=1,r=mx;
        int ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
             if(check(bloomDay,m,k,mid))
             { ans=mid;
              r=mid-1;
              
                 
             }else{
                 l=mid+1;
                 ans=l;
                 
             }
            
            
        }
        
        return ans;
    }
};