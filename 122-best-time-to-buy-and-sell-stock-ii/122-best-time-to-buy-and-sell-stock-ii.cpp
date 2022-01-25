class Solution {
    int n; 
    int dp[30005][2];
    int find(vector<int>&v,int i,bool buy )
    {
        if(n==1 ||i==n)return 0;
        
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy)
        {
            return dp[i][buy]=max( (find(v,i+1,!buy)-v[i]), find(v,i+1,buy));
            
        }
        else{
            return dp[i][buy]= max(v[i]+find(v,i+1,!buy),find(v,i+1,buy));
        }
    }
public:
    int maxProfit(vector<int>& prices) {
      
        n=prices.size();
        memset(dp,-1,sizeof(dp));
        return max(find(prices,0,1),0);
    }
};