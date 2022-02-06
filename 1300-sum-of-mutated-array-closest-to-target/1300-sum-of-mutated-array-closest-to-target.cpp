class Solution {

    bool check(vector<int>&v,int tg,int mid)
    {
        int sum1=0;
        int sum2=0;
        
        for(auto &it:v)
        {
            if(it>=mid)
                sum1+=mid;
            else{
                sum1+=it;
            }
            if(it>=mid+1)
                sum2+=(mid+1);
            else{
                sum2+=it;
            }
        }
        cout<<mid<<" "<<abs(sum1-tg)<<" | "<<mid+1<<" "<<abs(sum2-tg)<<endl;
        return abs(sum1-tg)<=abs(sum2-tg);
    }
    
    public:
    int findBestValue(vector<int>& v, int target) {
        int l=0;
        int r=*max_element(v.begin(),v.end());
        
        int ans;
         while(l<=r)
        {
          int   mid=l+((r-l)>>1);
             if(check(v,target,mid) )
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