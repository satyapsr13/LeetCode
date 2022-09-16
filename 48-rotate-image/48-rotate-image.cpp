#define vvi vector<vector<int>>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n=matrix.size();
        vvi temp(n,vector<int>(n,0));
        
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                temp[i][j]=matrix[i][j];
                
            }
        }
        int x=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                // temp[i][j]=matrix[i][j];
                matrix[j][n-x-1]=temp[i][j];
                
            }
            x++;
        }
        
        
        
    }
};