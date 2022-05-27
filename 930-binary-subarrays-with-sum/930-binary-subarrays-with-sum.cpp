class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        map<int,int>mp;
        int n=nums.size();
        mp[0]=1;
        
        vector<int>pre(n,0);
        pre[0]=nums[0];
           mp[pre[0]]++;
        for(int i=1;i<n;++i)
        {
            pre[i]=pre[i-1]+nums[i];
             mp[pre[i]]++;
        }
        
        if(goal==0)
        {
            // for(int i=0;i<n;++i)
            // {
            //     mp[pre[i]]=max(mp[pre[i]]-1,0);
            // }
            for(auto&it:mp)
            { cout<<it.first<<" "<<it.second<<endl;
                int tt=it.second-1;
                ans+=(tt*(tt+1)/2);
            }
            return ans;
                
        }
        for(int i=0;i<n;++i)
        {
            ans+=mp[pre[i]-goal];
        }
        return ans;
    }
};