class Solution {
    int n;
    int dp[101]={0};
    string l="1",r="27";
    int find(string s,int i )
    {
        if(i==n)return 1;
        
        string  rr="";
        int a=0,b=0;
        // if(s[i]=='0')
        //     i++;
        if(dp[i]!=-1)return dp[i];
        // cout<<"1\n";
        
        if(i!=n-1 and s[i]!='0'  ){
            rr.push_back(s[i]);
            rr.push_back(s[i+1]);
        }
        if(s[i]>='1' and rr<r and rr!=""   )
        {
            return dp[i]= find(s,i+1)+find(s,i+2);
        }else if( s[i]>='1') {
            return dp[i]= find(s,i+1);
        }else if(rr<r and rr!=""){
            return dp[i]= find(s,i+2);
        }
        return 0;
    }
public:
    int numDecodings(string s) {
      n=s.size();
        if(s[0]=='0')return 0;
        memset(dp,-1,sizeof(dp));
        return find(s,0 );
        
    }
};