class Solution {

    int find(vector<int>&v,int l,int r,int k)
    {
        cout<<l<<" "<<r<<" "<<k<<endl;
      
        if(k==3 or l>=r)
        {
            return v[r]-v[l];
        }
        
        
        return min({find(v,l+1,r,k+1),find(v,l,r-1,k+1),v[r]-v[l]});
        
    }
    
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
//         vector<int>diff;
        
        
        int n=nums.size();
        if(n<4)return 0;
// //          for(int i=0;i<n;++i)
// //         {    
// //            cout<<nums[i]<<" ";
        
// //         }
//         // cout<<endl;
//         for(int i=0;i<n-1;++i)
//         {    diff.push_back(nums[i+1]-nums[i]);
//            // cout<<diff[i]<<" ";
        
//         }
        
//         int l=0;
//         int r=n-2;
        
//         for(int i=0;i<3;++i)
//         {
//             if(diff[l]>diff[r])
//             {
//                 l++;
//             }else{
//                 r--;
//             }
//         }
//         r++;
        
        // return nums[r]-nums[l];
        
        //  int mn=INT_MAX;
        // for(int i=0;i<4;++i)
        // {
        //     mn=min(mn,nums[n-i-1]-nums[i]);
        // }
        // return mn;
        
        return find(nums,0,n-1, 0 );
        
        
    }
};