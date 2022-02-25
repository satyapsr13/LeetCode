int sss=1e31-1;
class Solution {
    void rev(string &s,int i )
    {
        reverse(s.begin()+i,s.end());
    }
public:
    int nextGreaterElement(int ss) {
        
        // return 0;
        if(ss>sss)return -1;
        string s=to_string(ss);
        int n=s.size();
        if(n==1)return -1;
        int l=n-2,r=n-1;
        
        while(l<r)
        {
            if(s[l]<s[r])
            {
                // swap(s[l],s[r]);
                
                rev(s,l+1);
                auto it=upper_bound(s.begin()+l,s.end(),s[l])-s.begin();
                swap(s[l],s[it]);
             long long nn=stoll(s);
                   if(nn>sss) return -1;
     
                return stoll(s);
            }
            else 
            {
                if(l==0)break;
                l--;
                r--;
                // swap(s[l],s[r]);
                // return stoi(s);
            }  
        }
     
    return -1;
    }
};