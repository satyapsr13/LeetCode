 int dp[40001][4] ;
   
class Solution {
    int n;
    int find(vector<int>&v,int i,int sum=0)
    {
        if(i==n and (sum)==0)return  0;
        if(i==n and (sum)!=0)return  INT_MIN;
        if(dp[i][sum]!=-1)return dp[i][sum];
        
        cout<<sum<<endl;
        return dp[i][sum] =max(find(v,i+1,((sum+v[i])%3))+v[i],find(v,i+1,sum ));
        
        
    }
    
    public:
    int maxSumDivThree(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        int ans=find(nums,0);
    for(int i=0;i<n+1;++i){
        cout<<dp[i]<<" ";
    }
        return ((ans==INT_MIN)?0:ans);
    
    
    }
  
};