// class Solution {
// public:
// int arr[50]={0};
//     int climbStairs(int n) {
    
//         if(n==1||n==2)
//             return n;
//         if(arr[n]!=0)
//             return arr[n];
//         return  arr[n]= climbStairs(n-1)+climbStairs(n-2);
//       // arr[]   
//     }    
// };
class Solution {
public:
int dp[50]={0};
    int climbStairs(int n) {
    
        dp[1]=1;
        dp[2]=2;
        
        for(int i=3;i<=n;++i)
        {
            dp[i]=dp[i-2]+dp[i-1];
        }
    
   return  dp[n];
    }    
};