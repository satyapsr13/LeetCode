// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
      vector<int>ans;
      for(int i=0;i<n;++i)
      {
        //   swap(arr[i],arr[n-i]);
          ans.push_back(arr[i]);
      }
      int a=0;int b=n-1;
      for(int i=0;i<n;i+=2)
      {
          arr[i]=ans[b--];
        //   swap(arr[i],arr[n-i]);
        //   ans.push_back(arr[i]);
      }
      for(int i=1;i<n;i+=2)
      {
          arr[i]=ans[a++];
        //   swap(arr[i],arr[n-i]);
        //   ans.push_back(arr[i]);
      }
     
     
        
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends