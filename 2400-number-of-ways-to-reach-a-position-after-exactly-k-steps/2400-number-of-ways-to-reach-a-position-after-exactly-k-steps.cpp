#define mod 1000000007
class Solution {
    
    
    vector<vector<int>> dp ;
    int find(int startPos,int endPos,int k)
    {
        if(k<=0)
        {
            return startPos==endPos+1000;
        }
        
        // cout<<k<<" "<<startPos-1000<<" "<<endPos<<endl;
        if(dp[startPos][k] != -1)
        {
            return dp[startPos][k]%mod;
        }
        
        if(startPos<0)
            return 0;
        
        return dp[startPos][k]= ((find(startPos+1,endPos,k-1)%mod)+(find(startPos-1,endPos,k-1))%mod)%mod;
        
        
    }
    
public:
    int numberOfWays(int startPos, int endPos, int k) {
    
        dp.resize(3001,vector<int>(1001,-1));
       
        return  find(startPos+1000,endPos,k);
    }
};