class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        
        for(auto it:s)
        {
            if(isupper(it)||islower(it)||isdigit(it))
                p.push_back(tolower(it));
        }
        s=p;
        reverse(s.begin(),s.end());
        return s==p;
    }
};