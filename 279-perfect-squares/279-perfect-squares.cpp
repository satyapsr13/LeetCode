class Solution {
  int nn;
    
    int find(int sum,int i,int cur)
        
    {
        if(sum==nn)return cur;
        if(sum>nn)return INT_MAX;
        if(i>100)return INT_MAX;
        cout<<cur<<" "<<sum<<endl;
        if((i*i)<=nn-sum)
        {
            return min(find(sum+(i*i),i,cur+1),find(sum ,i+1,cur+1));
        }else  {
            return INT_MAX;
        }
        
    }
public:
    int numSquares(int n) {
        nn=n;
        unordered_map<int,int>mp;
        // return find(0,1,0)-1;
        //-----------------------
        queue<pair<int,int>>q;
        q.push({n,0});
        while(!q.empty())
        {
            int node=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(node==0)return steps;
            for(int i=1;i*i<=node;++i)
            {
                if(mp[node-(i*i)]==0){
                q.push({node-(i*i),steps+1});
                  mp[node-(i*i)]=1;
                }}
            
            
        }
        return 0;
    }
};