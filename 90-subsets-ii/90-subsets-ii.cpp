
class Solution {
    vector<vector<int>>ans;
    void debugV(vector<int>v)   
    {
        for(auto &it:v)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
    
    void findSubset(vector<int>&v,int n,int i,vector<int>temp)
    {
        
       
        
          ans.push_back(temp);
        
        
        unordered_map< int ,bool>mp;
   
        for(int j=i;j<n;++j)
        {
                 if(mp[v[j]]==0)
                    { temp.push_back(v[j]);
            

                 findSubset(v,n,j+1,temp);
                 temp.pop_back();
            }
          mp[v[j]]=1;
        }
    }
    
    
public:
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        findSubset(nums,nums.size(),0,{});
        // ans.pop_back();
        return ans;
    }
};