void debug(map<char,int>m)
{
    for(auto &it:m)
    {
     cout<<it.first<<" "<<it.second<<endl;
     }
    cout<<"---------------------\n";
}
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.size();
        int m=p.size();
        vector<int>ans;
        int count=0;
        int l=0,r=0;
        map<char,int>countS;
        
        map<char,int>countP;
        for(auto &it:p)
        {
            countP[it]++;
        } 
        count=countP.size();
        // cout<<count;
        // debug(countP);
        
        while(r<n)
        {
            if(r-l+1<m)
            {
                countP[s[r]]--; 
                if(countP[s[r]]==0)
                {
                    count--;
                } 
                r++; 
            }
            else{
                
                countP[s[r]]--; // insert R in window
                if(countP[s[r]]==0)
                {
                    count--;
                } 
                if(count==0)ans.push_back(l);
                
                countP[s[l]]++; // remove L from window
                if(countP[s[l]]==1)count++;
                l++;
                 
                
                
                   r++;
                
            }
        }
        
        return ans;
    }
};