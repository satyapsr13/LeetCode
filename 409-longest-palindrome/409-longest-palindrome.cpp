class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        
        for(auto &it:s)
        {
            mp[it]++;
        }
        bool isOdd=0;
        int ans=0;
        for(auto &it:mp)
        {
            if(it.second&1)
            {
                isOdd=1;
            }
            ans+=((it.second&1)?it.second-1:it.second);
            
            
        }
        return ans+isOdd;
    }
};