#define mod 1000000007
 int dp[100005];
class Solution {
    int n;
    long  find(string &s,int i=0)
    {
        if(i==n)return 1;
     long a1=0;
          long a2=0;
         if(s[i]=='0')return 0;
        if(dp[i]!=-1)return dp[i];
             if(s[i]=='*')
            {
                 
                 a1=9*(find(s,i+1)%mod);
            }else
            {
                a1=find(s,i+1);
            }
         
         if(i!=n-1)
         { string r;
             r.push_back(s[i]);
             
             r.push_back(s[i+1]);
            if(s[i]=='*' and s[i+1]=='*')
             {
                 a2=15*find(s,i+2)%1000000007;
             
             } else 
            {    
             if(s[i]=='1' and s[i+1]=='*')
             {
                 a2=9*find(s,i+2)%mod;
            
             } else 
             {  if(s[i]=='2' and s[i+1]=='*')
             {
                 a2=6*find(s,i+2)%1000000007;
            
             } else 
             { if(s[i]=='*' and s[i+1]<'7')
             {
                 a2=2*find(s,i+2)%1000000007;
            
             } else 
             {if(s[i]=='*' and s[i+1]>'6')
             {
                 a2=find(s,i+2)%mod;
            
             } 
          
           
             else 
             {if(r>="10" and r<"27" and s[i]!='*' and s[i+1]!='*')
             {
                 a2=find(s,i+2)%1000000007;
             }
               
         } 
             }}}}}
        return dp[i]= (a1+a2)%1000000007;
    }
    
public:
    int numDecodings(string s) {
        
        n=s.size();
      memset(dp,-1,sizeof(dp));    
        return  find(s,0);
    }
};