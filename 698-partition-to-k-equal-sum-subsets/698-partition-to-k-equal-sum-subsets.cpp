class Solution {
    int sum;int n;
    
    int k1;
    bool find(vector<int>&v,int i,int target,vector<int>&bucket,int count)
    {
        
        if(i==n ) {
           return  count==k1;
        }
        
        
        for(int j=0;j<bucket.size();++j)
        {  
            
            if(bucket[j]+v[i]<=target)
           {
                bucket[j]+=v[i];
            if(find(v,i+1,target,bucket,count+(bucket[j]==target)))
                return true;
             bucket[j]-=v[i];
           }
         if(bucket[j]==0)
                break;
            
        }
        
        
     return false;   
    }
    
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sum=0;
        for(auto &it:nums)
        {
            sum+=it;
        }
        n=nums.size();
        k1=k;
        if(sum%k!=0|| k>n)return false;
        vector<int>bucket(k,0);
        
        
        
        return find(nums,0,sum/k,bucket ,0);
        
    }
};