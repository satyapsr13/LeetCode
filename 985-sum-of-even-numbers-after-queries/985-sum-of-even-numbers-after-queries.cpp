class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      vector<int>ans;
        
        int sum=0;
        int last=-1;
        
        nums[queries[0][1]]+=queries[0][0];
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if((nums[i]%2)==0)
            {
                sum+=nums[i];
            }
        }
        ans.push_back(sum);
        int m=queries.size();
        for(int i=1;i<m;++i)
        {
           int ind=queries[i][1];
            int val=queries[i][0];
            
            if(nums[ind]%2)
            {
                if(val%2)
                {
                   sum+=(val+nums[ind]);
                  
                    
                }
                
            
            }
            else
            {
                if((val%2)==0)
                {
                   sum+=val;
                  
                    
                }else{
                    sum-=nums[ind];
                }
                
                
            }
             nums[ind]+=val; 
            ans.push_back(sum);   
        }
        return ans;
    }
};