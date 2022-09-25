class Solution {
    vector<vector<string>>ans;
    bool isPalindrome(string s)
    {
        int n=s.size();
        
        for(int i=0;i<n/2;++i)
        { 
            if(s[i]!=s[n-i-1])
              return 0;
        }
        
        return 1;
        
    }
    
    void find(string s,int n,int l,vector<string>temp)
    {
         
        if(l==n)
        {
            ans.push_back(temp);
        }
        for(int i=l;i<n;++i)
        {
            string subStr=s.substr(l,i-l+1);
            
            if(isPalindrome(subStr))
            {
                temp.push_back(subStr);
                find(s,n,i+1,temp);
                temp.pop_back();
                
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n=s.size();
    
        find(s,n,0,{});
        return ans;
    }
};