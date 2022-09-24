class Solution {
    void debug(vector<int>v)
    {
        for(auto &it:v)
            cout<<it<<" ";
        cout<<endl;
    }
    
    vector<vector<int>>ans;
    void find(vector<int>can,int n,int target,int i,vector<int>v,int sum)
    {
         // debug(v);
        if(sum>target)
        {
            return;
        }
        
        if(sum==target) 
        {
            ans.push_back(v);
            return;
        }
       
        for(int j=i;j<n;++j)
        {
             v.push_back(can[j]);
            find(can,n,target,j,v,sum+can[j]);
            v.pop_back();
            
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        find(candidates,candidates.size(),target,0,{},0);
        
        return ans;
    }
};