class Solution {
        int n,m;
    vector<vector<int>>dp;
    // int dp[1001][1001]={-1};
    int find(string &s,string &p,int i,int j)
    {
        
        if(i>=n ||  j>=m)
        {
            return dp[i][j]=0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
       
        if(s[i]==p[j])
        {
            return dp[i][j]=find(s,p,i+1,j+1)+1;
            
        }else{
            return dp[i][j]= max(find(s,p,i+1,j),find(s,p,i,j+1));
        }
    }
public:
    int longestPalindromeSubseq(string s) {
        
        string p= s;
        reverse(s.begin(),s.end());
        n=s.size();
        m=n;
         dp.resize(n+1,vector<int>(m+1,-1));
      
        return find(s,p,0,0);
    }
};