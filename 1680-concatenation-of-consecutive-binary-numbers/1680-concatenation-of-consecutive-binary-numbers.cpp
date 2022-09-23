#define mod 1000000007
class Solution {
    int bitsN(int n)
    {
        return log2(n)+1;
    }
public:
    
    
    
    int concatenatedBinary(int n) {
        
        long long ans=0;
        
        for(int i=1;i<=n;++i)
        {
            int l=bitsN(i);
            
            ans=(((ans<<l)%mod)+i)%mod;
            
        }
        
        return ans;
    }
};