class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int i=0,j=matrix[0].size()-1;
        
        int n=matrix.size();
        int m=matrix[0].size();
            while(i<n and j>=0)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }else if(matrix[i][j]>target)
                {
                    j--;
                }else{
                    i++;
                }
                
            }
        
        return false;
        
        
    }
};