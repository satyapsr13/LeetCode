
int dp[1001][1001];
class Solution {
    int n,m;
    int find(vector<int>&v,vector<int>&v1,int i,int l,int r )
    {
        if(i==m)
            return 0;
 
       
        if(dp[i][l]!=-1)return dp[i][l];
        if(l>=0 and l<n and r>=0 and r<n)
        {
             return dp[i][l]= max( find(v,v1,i+1,l,r-1 )+(v1[i]*v[r]) , find(v,v1,i+1,l+1,r )+(v1[i]*v[l]) );
        }
         
        return 0;
        
    }
    
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n=nums.size();
        m=multipliers.size();
        
        memset(dp,-1,sizeof(dp));
       return (find(nums,multipliers,0,0,n-1 )); 
        
    }
};