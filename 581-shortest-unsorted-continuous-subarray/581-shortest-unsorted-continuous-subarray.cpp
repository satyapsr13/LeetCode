class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        stack<pair<int,int>>st;
        int i=0;
        
        int start=INT_MAX,end=-1;
        
        st.push({nums[0],0});
        
        for(int i=1;i<n;++i)
        {
            int val=nums[i];
            
             if(!st.empty())
             {
                 while(!st.empty() and val<st.top().first)
                 {
                     start=min(start,st.top().second);
                     st.pop();
                 }
                 
                 
             }
            
            st.push({val,i});
        
        }
        if(start==INT_MAX)
          return 0;
        stack<pair<int,int>>st1;
        // st.clear();
        st1.push({nums[n-1],n-1});
        for(int i=n-2;i>=0;--i)
        {
            int val=nums[i];
            
             if(!st1.empty())
             {
                 while(!st1.empty() and val>st1.top().first)
                 {
                     end=max(end,st1.top().second);
                     st1.pop();
                 }
                 
                 
             }
            
            st1.push({val,i});
        
        }
        
        if(end==-1)return 0;
        
        return end-start+1;
        
    }
};