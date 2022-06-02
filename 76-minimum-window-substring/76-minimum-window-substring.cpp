class Solution {
public:
    string minWindow(string s, string t) {
     map<char,int>mp;
           map<char,int>mp2;
        int n=s.size();
        for(auto &it:t)
        {mp[it]++;
            
        }
        int count=mp.size();
        int l=0,r=0;
        int ans1=-1,ans2=-1;
        int sum=0;
        int ans=1000005;
        while(r<n and l<=r)
        {
            // sum+=mp[s[r]];
             mp2[s[r]]++;
            if(mp[s[r]])
            {
               sum+=mp2[s[r]]==mp[s[r]];
                 
            }
            if(sum<count)
            {
                r++;
                
            }else 
            {
                
                while(sum>=count and l<=r)
                {
                    
                // cout<<l<<"  "<<r<<endl;
                    if(ans>r-l+1)
                  {
                        ans=r-l+1;
                   ans1=l,ans2=r;
                    
                    }
                        mp2[s[l]]--;
                    
                    if(mp[s[l]])
                   {
                        sum-=(mp2[s[l]]==mp[s[l]]-1);
                 
                    }
                    l++;
                    
                }
                r++;
            } 
            
        }
        
        if(ans1==-1)
           return "";
        return s.substr(ans1,ans2-ans1+1);
    }
};