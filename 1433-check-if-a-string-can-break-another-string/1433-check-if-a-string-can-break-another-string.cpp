class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        
        bool l1=1,l2=1;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
                cout<<s1<<" "<<s2;
        
        for(int i=0;i<s1.size();++i)
        {
           
           l1&= ( s1[i]>=s2[i]); 
           l2&= ( s1[i]<=s2[i]); 
               
        }
         
        return (l1 || l2);
    }
};