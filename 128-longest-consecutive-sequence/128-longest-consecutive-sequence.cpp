class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
          return 0;
        set<int>st;
        for(auto &it:nums)
        {
            st.insert(it);
            
        }
        int ans=1;
        
        for(int num:nums)
        {
            
            if(!st.count(num-1))
            {
                int currentNum=num;
                int count=1;
                while(st.count(currentNum+1))
                {
                    currentNum++;
                    count++;
                    // num++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};