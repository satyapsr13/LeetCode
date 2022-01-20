// #define int long long
class Solution {
    // typedef int long long;
    bool check(vector<int>&v,long long mid,int n)
    {
        int nn=v.size();
        long long count=0;
         for(auto &it:v)
             count+=min(it*1LL,mid);
        if(count>=mid*n){
            return 1;
        }else{
            return 0;
        }
    }
public:
    // long long maxRunTime(int n, vector<int>& batt) {
    //     // sort(batt.begin(),batt.end());
    //     int l=0;
    //     long long r=accumulate(batt.begin(),batt.end(),0LL);
    //     if(n==1)return r;
    //     while(l<r)
    //     {
    //         long long mid=l+(r-l)/2;
    //         if(check(batt,mid,n))
    //         {
    //             l=mid+1;
    //         }else {
    //             r=mid;
    //         }
    //     }
    //     return l-1;
    // }
    long long maxRunTime(int n, vector<int>& bat) {
    long long l = 0, r = accumulate(begin(bat), end(bat), 0LL) / n;
    while (l < r) {
        long long m = (l + r + 1) / 2, minutes = 0;
        for (int b : bat)
            minutes += min((long long)b, m);
        if (minutes >= n * m)
            l = m;
        else
            r = m - 1;
    }
    return l;
}
};