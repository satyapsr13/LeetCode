class Solution {
    vector<vector<int>>ans;
    
    void findSubset(vector<int>v,int n,int l,vector<int>temp)
    {
//         if(l==n)
//         {
//             // ans.push_back(temp);
        
       
//             return;
//         }
        ans.push_back(temp);
        //  for(auto &it:temp)
        // {
        //    cout<<it<<" ";   
        // }
        //     cout<<endl;
        
        for(int i=l;i<n;++i)
        {
            
            temp.push_back(v[i]);
            
            findSubset(v,n,i+1,temp);
            
            temp.pop_back();
        
        }
        
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        
        findSubset(nums,nums.size(),0,{});
        return ans;
    }
};