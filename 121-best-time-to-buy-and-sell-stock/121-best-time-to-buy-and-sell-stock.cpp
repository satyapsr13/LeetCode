class Solution {
    int n;
    int find(vector<int>&v, int i,int mn )
    {
        if(i==n) return 0;
      if(mn>v[i])
         return  find(v,i+1,v[i] ) ;
       else return max(v[i]-mn,find(v,i+1,mn));  
        
    }
    public:
    int maxProfit(vector<int>& prices) {
        
        n=prices.size();
    return find(prices,0,prices[0]);
    
    }
};