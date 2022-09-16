class Solution {
    
    double find(double x,long long n)
    {
        if(n==0)
        {
            return 1;
            
        }
        else
        {
            
            if(n&1)
            {
                return x*find(x*x,n/2);
            }else{
                     return find(x*x,n/2);
                
                
            }
            
        }
    }
    
public:
    double myPow(double x, int n) {
     
        if(n<0)
        {
            return 1/find(x,-1LL*n);
        }
        
        
        return find(x,n);
        
    }
};