class Solution {
    int dp[100005][2] ;
     int n;
    int find(vector<int>&v,int i,bool buy,int k)
    {
        if( n==1|| i==n  || k==0)return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy)
        {
            
            return dp[i][buy]= max(-v[i]+find(v,i+1,!buy,k ),find(v,i+1,buy,k));
        }else{
            
            return dp[i][buy]= max(v[i],find(v,i+1,buy,k));
      
        }
    }
    
public:
    int maxProfit(vector<int>& prices) {
        n=prices.size();
       memset(dp,-1,sizeof(dp));
        return max(0,find(prices,0,1,1));
    }
};