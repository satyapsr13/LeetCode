class Solution {
    int n;
    
    bool find(string &s,int i,int a,int l)    
    {
        if(i==n)return true;
        if(l==2 and s[i]=='L')return false;
        if(a==1 and s[i]=='A')return false;
        
        if(s[i]=='P')
        {
            return find(s,i+1,a,0);
        }  
        
        
        if(s[i]=='A')
        {    
            return find(s,i+1,a+1,0);
        }
        else
        {
            return find(s,i+1,a,l+1);
        }
    
    }   
    
    
public:
    bool checkRecord(string s) {
        n=s.size();

    
        return find(s,0,0,0);
    }
};