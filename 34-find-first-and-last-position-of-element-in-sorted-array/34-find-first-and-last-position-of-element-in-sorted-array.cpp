// class Solution {
//     private:
//     int n;
//     vector<int>ans;
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//        n=nums.size();
        
//         if(n<1)return {-1,-1};
//         int l=0,r=nums.size()-1;
//         int temp=-1;
//         while(l<r)
//         {
//             int mid=l+(r-l)/2;
         
//             if(nums[mid]==target)
//             {
//                 temp=mid;
//                 r=mid-1;
//                 continue;
//             }else if( nums[mid]<target){
//                 l=mid+1;
//             }else{
//                 r=mid-1;
//             }
        
//         }
//         // if(nums[l]==target)
//         ans.push_back(temp);
//         // else ans.push_back(-1);
//         l=0;
//         r=n -1;
//         cout<<r;
//         while(l<r)
//         {
//             cout<<l<<" "<<r<<endl;
        
//             int mid=l+(r-l)/2;
//             if(nums[mid]==target)
//             { temp=mid;
//                 l=mid+1;
//               continue;
//             }
//            if(nums[mid]<target)
//            {
//                l=mid+1;
//            }else{
//                r=mid-1;
//            }
//         }
//         ans.push_back(temp);
//         // else ans.push_back(-1);
//         return ans;
//     }
// };
class Solution {
public:
        int find1( vector<int>&nums,int target)
       {
          int n=nums.size();
          int start=0,end=n-1;
          int res=-1;
          while( start<=end)
          {
              int mid= start+(end-start)/2;
              if( nums[mid]==target)
              {
                  res=mid;
                  end=mid-1;
              }
              if( nums[mid]<target)
              {
                  start= mid+1;
              }
              else if( nums[mid]>target)
              {
                  end= mid-1;
              }
          }
        //cout<<res<<" ";
          return res;
        }
     int find2( vector<int>&nums,int target)
      {
          int n=nums.size();
          int start=0,end=n-1;
          int res1=-1;
          while( start<=end)
          {
              int mid= start+(end-start)/2;
              if( nums[mid]==target)
              {
                  res1=mid;
                  start=mid+1;
              }
              if( nums[mid]<target)
              {
                  start= mid+1;
              }
              else if( nums[mid]>target)
              {
                  end= mid-1;
              }
          }
       //cout<<res1<<" ";
         return res1;
      }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
       int n=nums.size();
        int first=find1(nums,target);
      int last= find2( nums,target);
     // vector<int>v;
        return { first,last};
    }
};