class Solution {
    int find(vector<int>&v,int k)
    {
        int sum=0;
        for(auto &it:v)
        { double tt=((double)it/(double)k); 
          
            sum+=ceil(tt);
        
         // cout<<tt<<endl;
        }
        return sum;
    }
    
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int mx=*max_element(nums.begin(),nums.end());
        int ans;
        int a=1;
        mx=1000000;
        int b=mx+1;
        while(a<b)
        {
            int mid=a+(b-a)/2;
            int temp=find(nums,mid);
            ans=mid;
            // cout<<mid<<" "<<temp<<" "<<a<<" "<<b<<endl;
            if(temp>threshold)
            {
                a=mid+1;
                // ans=mid
            }else {
                b=mid;
            }
           
        }
        
        // cout<<find(nums,2);
        return a;
    }
};