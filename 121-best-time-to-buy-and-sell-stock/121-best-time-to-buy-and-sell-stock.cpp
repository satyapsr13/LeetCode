class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int last=INT_MAX;
        int ans=0;
        for(int i=0;i<n;++i)
        {
            
            if(prices[i]<last)
            {
                last=prices[i];
            }
            int temp=prices[i]-last;
            
            if(temp>ans)
            {
                ans=temp;
            }
            
        }
        return ans;
    }
};