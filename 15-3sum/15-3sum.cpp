class Solution {
    int n;
    set<vector<int>>st;
    vector<vector<int>>ans;
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        n=v.size();
        if(n<3)return ans;
        sort(v.begin(),v.end());
        // for(auto &it:v)
        //     cout<<it<<" ";
        cout<<endl;
        int i=0;int l=1,r=n-1;
        cout<<"yes";
        while(i<n-1)
        {
            // int target=-v[i-1];
            l=i+1,r=n-1;
         
            while(l<r)
            {  
                // cout<<v[l]+v[r]+v[i]<<endl;
                if(v[l]+v[r]+v[i]==0)
                { cout<<"fd";
                    st.insert({v[i],v[l],v[r]});
                 while(l<r and v[l]==v[l+1] )l++;
                 
                 while(l<r and v[r]==v[r-1] )r--;
                    l++;
                    r--;
                }
                
               else if(v[l]+v[r]+v[i]>0)
                {
                    // st.insert({v[i],v[l],v[r]});
                    // l++;
                    r--;
                   continue;
                }else 
                if(v[l]+v[r]+v[i]<0)
                {
                    // st.insert({v[i],v[l],v[r]});
                    l++;
                    continue;
                    // r--;
                }
                // cout<<i<<" "<<l<<" "<<r<<endl;
            }
            i++;
        }
        
        for(auto &it:st)
            
        {
            ans.push_back(it);
        }
        return ans;
    }
};