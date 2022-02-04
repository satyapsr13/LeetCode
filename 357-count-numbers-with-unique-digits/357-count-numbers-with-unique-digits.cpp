class Solution {
    // int arr
    int nn;
    int find(int i,int parent,unordered_map<int,bool>&mp,bool l)
    {
        if(nn==i)return 1;
        l=(l || (parent>0));
        int res=0;
        for(int j=0;j<=9;++j )
        {
            if(l)
            {
                if(!mp[j]  )
                {
                 mp[j]=1; 
                 res+=find(i+1, j ,mp,l);
             
                mp[j]=0;
                
                }
            }
            else{
                if(j!=0)
               { mp[j]=1;
                    res+=find(i+1, j  ,mp,l);
                mp[j]=0;
                }
               else{
                              res+=find(i+1, j  ,mp,l);
         
               }       
                
                 }
                
            }
        
        
        return res;
    }
public:
    int countNumbersWithUniqueDigits(int n) {
      nn=n;
        
     unordered_map<int,bool>mp;
     
        
        return find(0,0, mp,0); 
    
     // return 0;   
    }
};