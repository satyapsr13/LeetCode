class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
        int ans=0;
        
        int n=v.size();
        for(auto &it:v)
        {
            it=it&1;
            
        }
        map<int,int>mp;
        mp[0]=1;
        vector<int>pre(n,0);
         pre[0]=v[0];

            mp[pre[0]]++; 
        for(int i=1;i<n;++i)
        {
            pre[i]=pre[i-1]+v[i];
            mp[pre[i]]++;
        }
        
        // for(auto it:pre)
        //     cout<<it<<" ";
        // cout<<endl;
        for(int i=0;i<n;++i)
        {
            ans+=mp[pre[i]-k];
        }
        // for(auto &it:mp)
        //     cout<<it.first<<" "<<it.second<<endl;
        
        return ans;
    }
};