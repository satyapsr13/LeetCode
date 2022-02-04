class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>a1;
        queue<int>a2;
        for(auto &it:nums)
        {
            if(it>0)
                a1.push(it);
            else a2.push(it);
        }
        
        vector<int>ans;
        while(!a1.empty())
        {
            int pos=a1.front();
            
            int neg=a2.front();
            ans.push_back(pos);
            ans.push_back(neg);
            a1.pop();
            a2.pop();
        }
            return ans;
    }
};