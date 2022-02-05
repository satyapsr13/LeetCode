class Solution {
public:
    int arrangeCoins(int n) {
        
        long long l=1,r=n;
        long long ans;
        int count=0;
        while(l<=r)
        {
            long long mid=l+((r-l)>>1);
            cout<<mid<<endl;
            if((mid+1)*mid/2<=(n))
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