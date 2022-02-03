class Solution {
    int arr[11];
    int n;
    int dp[10][2][100000];
    int find(int i,bool l ,int sum)
    { 
        
        if(i==n)return sum;
        if(dp[i][l][sum]!=-1)return dp[i][l][sum];
        int r=9;
                    
        if(l)
            r=arr[i];
        int res=0;
        
        for(int j=0;j<=r;++j)
        {
            
            res+=find(i+1,(l and (j==arr[i])),sum+(j==1));
        
        }
        
        return dp[i][l][sum]= res;
        
    }
    
public:
    int countDigitOne(int m) {
         string s=to_string(m);
         
        n=s.size();   
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;++i)
          {
              arr[i]=s[i]-'0';
         
          }
        
        
        return find(0,1,0);    
    }
};