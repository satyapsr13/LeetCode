class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int mx=INT_MIN;
        while(l<r)
        {
            
            mx=max(mx, min(height[l],height[r])*(r-l) );
            cout<<mx<<" "<<l<<" "<<r<<endl;
            if(height[l]<height[r])
            {
                int tt=height[l];
                while(l<r and tt>height[l+1])l++;
             
                l++;
                continue;
            }
            
            if(height[l]>height[r])
            {  int tt=height[r];
                   while(l<r and tt>height[r-1])r--;
             
                // l++;
                r--;
                continue;
            }
            if(height[l]==height[r])
            {
                l++;
                r--;
            }
            
            
        }
        
        
        return mx;
    }
};