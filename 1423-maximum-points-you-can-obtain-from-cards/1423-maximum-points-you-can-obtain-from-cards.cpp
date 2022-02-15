class Solution {
    int n;
public:
    int maxScore(vector<int>& cardPoints, int k) {
        n=cardPoints.size();
        
        int prefix[100001]={0},postfix[100001]={0};
        
        int ans=INT_MIN;
        prefix[0]=cardPoints[0];
        for(int i=1;i<n;++i)
            prefix[i]=prefix[i-1]+cardPoints[i];
        
        postfix[n-1]=cardPoints[n-1];
        
        for(int i=n-2;i>=0;--i)
            postfix[i]=postfix[i+1]+cardPoints[i];
   
        for(int i=0;i<k;++i)
            ans=max(ans,prefix[i]+postfix[n-k+i+1]);
       
        cout<<prefix[k-1];
        ans=max({ans,prefix[k-1],postfix[n-k]});
        return ans;
        
        
    }
};