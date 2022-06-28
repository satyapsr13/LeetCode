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
    int longestCommonSubsequence(string text1, string text2) {
       
        n=text1.size();
        m=text2.size();
        dp.resize(n+1,vector<int>(m+1,-1));
        // return 0;
        return find(text1,text2,0,0 );
    }
};