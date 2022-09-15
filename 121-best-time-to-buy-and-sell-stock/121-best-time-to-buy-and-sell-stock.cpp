class Solution {
    int n;
    // int dp[100001][2]={-1};
    vector<vector<int>>dp;
    int find(vector<int>&v,int i,bool buy)
    {
        
        if(i==n-1 )
        {
            if(!buy)
                return v[i];
            
            return 0;
        }
        // cout<<i<<" "<<buy<<endl;
        if(dp[i][buy]!=-1)
            return dp[i][buy];
     
        if(buy)
        {
            return dp[i][buy]=max(find(v,i+1,0)-v[i],find(v,i+1,1));
        }else{
            return dp[i][buy]=max(v[i],find( v,i+1,0 ));
        
        }
        
        
    }
    
public:
    int maxProfit(vector<int>& prices) {
         n=prices.size();
        
        dp.resize(n,vector<int>(2,-1) );
      
       
        
        return find(prices,0,1);
        
        
    }
};