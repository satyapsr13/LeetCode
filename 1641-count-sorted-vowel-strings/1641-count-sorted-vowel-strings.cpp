class Solution {
    int dp[51][7];
    int find(int n,int t,string s)
    {
        if(n==0){
            // cout<<s<<endl;
            return 1;}
        int ans=0;
        
        if(dp[n][t]!=-1)return dp[n][t];
        for(int i=t;i<5;++i )
        {   
            s.push_back(i+'0');
            
            ans+=find(n-1,i,s);
            
            s.pop_back();
        }   
        
        
        return dp[n][t]= ans;
    }
    
public:
    int countVowelStrings(int n) {
        string s;
        memset(dp,-1,sizeof(dp));
        return find( n,0,s);
    }
};