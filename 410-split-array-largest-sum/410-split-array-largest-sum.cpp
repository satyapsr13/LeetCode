class Solution {
    bool check(vector<int>&v,int m,int mid)
    {
        int count=0;
        int sum=0;
        for(int i=0;i<v.size();++i)
        {
            sum+=v[i];
            if(sum>mid)
            {
            // cout<<sum<<" ";
                sum=v[i];
                count++;
            
            }
            // cout<<
            
        }   
        // cout<<endl;
        count++;
        // cout<<mid<<" "<<count<<endl;
            return count<=m;
    }
public:
    int splitArray(vector<int>& nums, int m) {
        
        int mx=accumulate(nums.begin(),nums.end(),0LL);
        int l=*max_element(nums.begin(),nums.end()),r=mx;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            // int t=
            if(check(nums,m,mid))
            {
                ans=mid; 
                r=mid-1;
            }else{ 
                l=mid+1;
                ans=l;
            }
        }
        
        return ans;
    }
};