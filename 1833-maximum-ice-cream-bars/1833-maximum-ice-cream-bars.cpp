class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(),costs.end());
        
        
        int cnt=0;
        
        int sum=0;
        for(int i=0;i<costs.size();++i)
        {
            cnt++;
            sum+=costs[i];
            if(sum>coins)
            {
               cnt--;
                break;
            }
        }
        return cnt;
    }
};