// #define int long long
class Solution {
    
    unordered_map<long long,bool>mp;
public:
    int nthUglyNumber(int n) {
        
        vector<long long>v; 
        v.push_back(1);
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        pq.push(1);
        mp[1]=true;
        int tt=1690;
        int t=1;
        long long i=2LL;
        while(!pq.empty() and tt--   )
        {
            long long a= pq.top();
            pq.pop();
             i=2 ;
                
            // cout<<++t<<"  "<<a  <<endl;
       
            // cout<<a<<endl;
            if(a>2123366400)
                break;
            if(!mp[a*i])
            {
                
           
            // cout<<++t<<"  "<<a<<" * "<<i<<" = " << a*i <<endl;
                pq.push(a*i);
                mp[a*i]=1;
                v.push_back(a*i);
                
            }
            i=3 ;
            if(!mp[a*i])
            {
                
            
            // cout<<++t<<"  "<<a<<" * "<<i<<" = "<<a*i <<endl;
                pq.push(a*i);
                mp[a*i]=1;
                v.push_back(a*i);
            }
            i=5 ;
            
            if(!mp[a*i])
            {
            pq.push(a*i);
                mp[a*i]=1;
                v.push_back(a*i);
            }
             
            
        }
        // cout<<" ";
        // for(int i=0;i<v.size();++i)
        //   cout<<v[i]<<" ";
        sort(v.begin(),v.end());
        return v[n-1];
    }
};