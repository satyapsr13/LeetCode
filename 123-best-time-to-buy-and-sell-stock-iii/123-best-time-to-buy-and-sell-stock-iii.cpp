class Solution {
    int n;
    int dp[100001][2][3];
    int find(vector<int>&v,int i,bool buy,int k)
    {
        if(n==1||i==n||k==0)return  0;
        
        if(dp[i][buy][k]!=-1)return dp[i][buy][k];
        if(buy)
        {
            return dp[i][buy][k]=max(find(v,i+1,!buy,k)-v[i],find(v,i+1,buy,k));
        }
        else {
            return dp[i][buy][k]= max(v[i]+find(v,i+1,!buy,k-1),find(v,i+1,buy,k));


            }
    }
public:
    int maxProfit(vector<int>& prices) {
    
        n=prices.size();
        memset(dp,-1,sizeof(dp));
        return find(prices,0,1,2);
    }
};