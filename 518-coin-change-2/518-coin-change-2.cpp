class Solution {
    int n;    
    int total;
    int dp[301][5001];
    int find(vector<int>&v,int amount,int i,string s)
    {
            
        if(amount==0){
 
            return 1;
        }
        if(amount<0)return 0;
        
        if(i>=n )return 0;
          
        if(dp[i][amount]!=-1)return dp[i][amount];
        
           if(amount-v[i]>=0)
            {  
            
               // s.push_back(v[i]+'0');
              return  dp[i][amount]=find(v,amount,i+1,s)+find(v,amount-v[i],i,s);
                
            }
        else{  return  dp[i][amount]=find(v,amount,i+1,s);
            
            
            // return  find(v,amount-v[i],i,s)+find(v,amount-v[i],i+1,s);
              
            // return 0;
            }
    }
public:
    int change(int amount, vector<int>& coins) {
        n=coins.size();
        total=amount;
        string s;
        memset(dp,-1,sizeof(dp));
        return find(coins,amount,0,s);    
    }
};
