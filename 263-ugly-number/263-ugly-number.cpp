       
// class Solution {
//      int nn; 
    
//       // vector<int>arr;
//     unordered_map<int,int>arr;
     
    
//     void find(int nn)
//     {  
//            for(int i=2;i*i<=nn+1;++i)
//         {  
//                if(!arr[i*i])
//             for(int j=i*i;j<nn+1;j+=i)
//             {
//                 arr[j]=1;
             
                
//             }
//         }
     
     
     
//     }

//     public:
//     bool isUgly(int n) {
     
//         if(n<0)n=-n;
//         nn=n+1;
//         find(n);
     
//         for(int i=7;i<nn+1;i+=2)
//      {
//          if(!arr[i])
         
//        { if(n%i==0)
//             return false;
//        }
//     }
//         return true;
//     }
// };
                    
class Solution {
     int nn; 
    
      // vector<int>arr;
    unordered_map<int,int>arr;
     
    
    void find(int nn)
    {  
           for(int i=2;i*i<=nn+1;++i)
        {  
               if(!arr[i*i])
            for(int j=i*i;j<nn+1;j+=i)
            {
                arr[j]=1;
             
                
            }
        }
     
     
     
    }

    public:
    bool isUgly(int n) {
   
        if(n==0)return n;
        
        while(n%3==0||n%2==0||n%5==0)
        {
            
            if(n%3==0)
                n/=3;
             if(n%2==0)
                n/=2;
             if(n%5==0)
                n/=5;
            
            
            
            
        }
        return n==1;
    }
};