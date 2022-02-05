class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(auto&it:nums)
        {
            mp[it]=1;
        }
        for(int i=1;i<nums.size()+2;++i)
        {
            if(!mp[i])return i;
        }
    
    return 0;}
};