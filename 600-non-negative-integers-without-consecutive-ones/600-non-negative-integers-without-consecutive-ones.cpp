class Solution {
    // int arr[10];
    vector<int>v;
    int n1;
    int ans=0;
    int dp[100][2][2] ;
    int find(int i,bool l,int parent ,bool isequal)
    {
        
        if(isequal)return 0;
        
        if(i==n1){ 
            
            return 1;}
        
        int r=1;
        if(dp[i][l][parent] !=-1)return dp[i][l][parent] ;
        if(l)
            r=v[i];
        int res=0;
        
         for(int j=0;j<=r;++j)
        {
            // if(parent==j and parent==1)continue;
            cout<<i<<"  "<<j<<endl;
            res+=find(i+1,(l and j==v[i]),j,(parent==j and j==1)) ;
            
        }        
        return dp[i][l][parent] = res;
    }
public:
    int findIntegers(int n) {
        int a=log2(n);
        
        for(int i=a;i>=0;--i)
            v.push_back((n&(1<<i))==(1<<i));
        
        n1=v.size();
        memset(dp,-1,sizeof(dp));
        // for(auto &it:v)
        //     cout<<it;
        
        // int ans=0;
         int t=find(0,1,0,0 );
    return t;
   
    }
};