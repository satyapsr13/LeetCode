class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int n=s.size();
        if(n<2)
            return n;
        int l=0,r=1;
        map<char,int>mp;
        mp[s[l]]++;
        int ans=1;
        while(l<r and r<n)
        {
            mp[s[r]]++;
            if(mp[s[r]]>1)
            {
               while(mp[s[r]]>1)
               {
                   mp[s[l++]]--;
               }
                r++; 
                
            }
            else
            {
                ans=max(ans,r-l+1);
                r++;
                
            }
            
     
        }
        return ans;
    }
};