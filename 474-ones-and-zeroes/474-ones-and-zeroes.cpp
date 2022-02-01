class Solution {
    int dp[101][101][601];
    int count0(string &s)
    { int count=0;
        for(auto &it:s)
        {
            if(it=='0')count++;
            
        }
     return count;
        
    }
    int nn;
    int find(vector<string>&v,int m,int n,int i,int count)
        
    {
        if(i<0||(m<=0 and n<=0))return 0;
        
        int sz=v[i].size();
        int cnt0=count0(v[i]);
        int cnt1=sz-cnt0;
        
        if(dp[m][n][i]!=-1)return dp[m][n][i];
        
        if(cnt1<=n and cnt0<=m)
        {
            
            return dp[m][n][i]= max(find(v,m-cnt0,n-cnt1,i-1,count)+1,find(v,m ,n ,i-1,count ));
        }
        else
        {
            
            return dp[m][n][i]=find(v,m ,n ,i-1,count );
            
            
        }
        
        
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        nn=strs.size();
        memset(dp,-1,sizeof(dp));
        return find(strs,m,n,nn-1,0);
    }
};