struct cmp
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
class Solution {
    int calCost(int mx,int k,int sum )
    {
        return mx+(k*(sum));
    }
public:
//     int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
//         int n=chargeTimes.size();
//         map<int,int>mp;
//         int ans=0;
//         int sum=0;
//         int l=0,r=0;
//         int mx=0; 
//         multiset<int>mst;
//         while(r<n and l<n)
//         {
            
//             sum+=runningCosts[r];
//             mst.insert(chargeTimes[r]);
//             mx=*mst.begin();
//             if(calCost(mx,r-l+1,sum)<=budget)
//             {
//                 ans=max(ans,r-l+1);
//                 r++;
//             }else{
                
//                 while(calCost(mx,r-l+1,sum)>budget and l<=r)
//                 {
                
//                     sum-=runningCosts[l];
//                    mst.erase(mst.find(chargeTimes[l]));
//                       mx=*mst.begin();
//                     l++;
//                 }    
//                      mst.erase(mst.find(chargeTimes[r]));
//                     sum-=runningCosts[r];
            
//             }
            
            
//         }
    int maximumRobots(vector<int>& times, vector<int>& costs, long long budget) {
        long long i = 0, j, sum = 0, n = times.size();
        multiset<int> s;
        for (int j = 0; j < n; ++j) {
            sum += costs[j];
            s.insert(times[j]);
            if (*rbegin(s) + sum * (j - i + 1) > budget) {
                sum -= costs[i];
                s.erase(s.find(times[i++]));
            }
        }
        return n - i;
    }
        
    //     return ans;
    // }
};