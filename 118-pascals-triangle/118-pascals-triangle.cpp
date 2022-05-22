#define vvi vector<vector<int>> 
class Solution {
    vvi ans;
    int n;
    void find(vector<int>  v,int k )
    {
        if(k==n)return ;
        vector<int>vv;
        vv.push_back(1);
        for(int i=1;i<v.size();++i)
        {
            vv.push_back(v[i]+v[i-1]);
            
        }
        
        vv.push_back(1);
        ans.push_back(vv);
        find(vv,k+1);
        
        
    }
public:
    vector<vector<int>> generate(int numRows) {
        
        n=numRows;
        ans.push_back({1});
        if(n==1)return ans;
        vector<int>v;
        
        find(v ,1);
        return ans;
        
    }
};