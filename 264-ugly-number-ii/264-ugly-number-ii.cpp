class Solution {
public:
    int nthUglyNumber(int n) {
        
        int t1=0,t2=0,t3=0;
        
        
        vector<int>v(n+1);
        v[0]=1;
        
        for(int i=1;i<n;++i)
        {
            v[i]=min({v[t1]*2,v[t2]*3,v[t3]*5});
            
            if(v[i]==v[t1]*2)t1++;
            
            if(v[i]==v[t2]*3)t2++;
            if(v[i]==v[t3]*5)t3++;
            
            
            
        }
        return v[n-1];
    }
};