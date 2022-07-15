class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        
        bool l=1;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
                cout<<s1<<" "<<s2;
        
        for(int i=0;i<s1.size();++i)
        {
           
           l&= ( s1[i]>=s2[i]); 
                // return 0;
        }
        if(l)
          return l;
        l=1;
        
        for(int i=0;i<s1.size();++i)
        {
           
           l&= ( s1[i]<=s2[i]); 
                // return 0;
        }
        
        return l;
    }
};