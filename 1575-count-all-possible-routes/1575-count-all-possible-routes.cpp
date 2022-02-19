#define mod 1000000007
class Solution {
    
    int n;
    int dp[101][201];
    int find(vector<int>&v,int r,int i,int fl,string s )
    {
        if(fl<0)return 0;
        
        int ans=0;
        if(i==r ){
            // cout<<s<<endl;
            // return 1+;
            ans=1;
        }
       if(dp[i][fl]!=-1)return dp[i][fl];
        for(int j=0;j<n;++j)
        {
            if(i==j)
                continue;
            else{
                
                if(fl-abs(v[i]-v[j])>=0)
                    
                { 
                    // if(j==0)
                    // cout<<fl-abs(v[i]-v[j])<<" ";
                    // s.push_back(j+'0');
                    ans+=(find(v,r,j,fl-abs(v[i]-v[j]),s)%mod);
                 ans=ans%mod;
                   // s.pop_back();
                }
            }
        }
        return dp[i][fl]=(ans%mod);
    }
    
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
       
        n=locations.size();
        string s;
        memset(dp,-1,sizeof(dp));
        return find(locations,finish,start,fuel,s)%mod;
    }
};