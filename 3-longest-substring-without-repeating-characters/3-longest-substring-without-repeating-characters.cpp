class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        
        int l=0,r=0;
        int ans=0;
        map<char,int>mp;
        while(r<n)
        {
            mp[s[r]]++;
            if(mp[s[r]]<=1)
            {
               
                ans=max(ans,r-l+1);
                cout<<s.substr(l,r-l+1);
            cout<<endl; r++;
            }
            else{
               
                while(s[l]!=s[r])
                {
                    mp[s[l]]--;
                    
                    l++;
                    
                }
                r++; mp[s[l]]--;
                l++;
               
                    
            }
            
        }
        
        return ans;
    }
};