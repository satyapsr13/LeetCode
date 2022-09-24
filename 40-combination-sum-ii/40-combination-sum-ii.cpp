class Solution {
    
    vector<vector<int>>ans;
    void find(vector<int>&can,int n,int target,int l,vector<int>v,int sum)
    {
        
        if(sum>target)
        {
            return ;
        }
        
        if(sum==target)
        {
            ans.push_back(v);
        }
        
        unordered_map<int,bool>mp;
        for(int i=l;i<n;++i)
        {
            if(!mp[can[i]])
         {   v.push_back(can[i]);
            find(can,n,target,i+1,v,sum+can[i]);
            v.pop_back();
         }
            mp[can[i]]=1;
            
            
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        find(candidates,candidates.size(),target,0,{},0);
        
        return ans;
    }
};