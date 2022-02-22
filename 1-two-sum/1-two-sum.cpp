class Solution {
    vector<pair<int,int>>v1;
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n=v.size();
        for(int i=0;i<n;++i)
        {
            v1.push_back({v[i],i});
        }
        
        sort(v1.begin(),v1.end());
        
        int l=0;int r=n-1;
        while(l<r)
        {
            if(v1[l].first+v1[r].first==target)
            {
                return {v1[l].second,v1[r].second};
            }else if(v1[l].first+v1[r].first>target)
            {
                r--;
            }else{
                l++;
            }
                
                }
        
        
        
        return {0,0};
    }
};