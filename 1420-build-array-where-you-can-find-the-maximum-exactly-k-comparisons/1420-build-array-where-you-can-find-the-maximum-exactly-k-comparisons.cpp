#define mod 1000000007
class Solution {
    int dp[51][101][101];
    int find(int n,int m ,int k,int count,string s,int pre)
    {
        if(n==0 and count==k)
        {
            // cout<<s<<endl;
            return 1;}
     
        if( n==0 || count>k ){
            // cout<<s<<endl;
            return 0;}
        if(dp[n][pre][count]!=-1)return dp[n][pre][count];
        
        int ans=0;
        
        for(int i=1;i<=m;++i)
        {
             // s.push_back(i+'0');
            if(pre>=i)
             {             
                ans+= (find(n-1 , m , k , count , s , pre )%mod);
                 ans=ans%mod;
              }
            else{
                   
                ans+= (find(n-1 , m , k , count+1 , s , i )%mod);
                   ans=ans%mod;
               }
            // s.pop_back();
        }    
        return dp[n][pre][count]= (ans%mod);
    }
public:
    int numOfArrays(int n, int m, int k) {
        string s;
        memset(dp,-1,sizeof(dp));
        return (find(n,m,k,0,s,0)%mod);
    }
};