#define mod 1000000007
class Solution {
    // typedef int long ;
    unordered_map<int,vector<int>>mp;
    int n;
    long long dp[5001][10];
    int cnt=0;
    int find(int i,int parent)
    {
        if(i==n-1)return 1;
        long long res=0;
        if(dp[i][parent]!=-1)return dp[i][parent];
        
        for(int ii=0;ii<mp[parent].size();++ii)
        {
            if(i==0)
            {
            for(int j=0;j<mp[mp[parent][ii]].size();++j)
      {      cout<<++cnt<<"-> "<<parent<<"  "<<mp[parent][ii] <<" "<<mp[mp[parent][ii]][j]   <<endl;
            
            // cout<<parent<<" -> "<<mp[parent][ii] <<" "<<mp[mp[parent][ii]][1]<<" "<<i <<endl;
      }      }
         
         
         res=res%mod+(find(i+1,mp[parent][ii])%mod);
        res=res%mod;
        }
        
        return dp[i][parent]= res%mod;
    }
public:
    int knightDialer(int n1) {
        n=n1;
        memset(dp,-1,sizeof(dp));
        { mp[0].push_back(4);mp[0].push_back(6);
    mp[1].push_back(8);mp[1].push_back(6);
    mp[2].push_back(7);mp[2].push_back(9);
    mp[4].push_back(3);mp[4].push_back(9);
    mp[4].push_back(0);mp[6].push_back(0);
    mp[3].push_back(4);mp[3].push_back(8);
    mp[6].push_back(7);mp[6].push_back(1);
    mp[7].push_back(2);mp[7].push_back(6);
    mp[8].push_back(3);mp[8].push_back(1);
    mp[9].push_back(4);mp[9].push_back(2);
    
    
        
   }     
       int ans=0;
        for(int i=0;i<=9;++i)
        {
            ans=ans%mod+find(0,i)%mod;
            ans=ans%mod;
        }
        
        return ans%mod;
    }
};