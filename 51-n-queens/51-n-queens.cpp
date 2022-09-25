class Solution {
    vector<vector<string>>ans;
    void debug(vector<string>v)
    {
        for(auto &it:v)
            cout<<it<<endl;
    }
    void find(int n,vector<string>board,int l,vector<bool>col,unordered_map<int,bool>diag,unordered_map<int,bool>diag2)
    {
        
        if(l==n)
        {
            debug(board);
            ans.push_back(board);
            cout<<endl;
        }
        
        for(int i=0;i<n;++i)
        {
            // board[i][l]='Q';
            if(col[i]==false and diag[i-l]==false and diag2[i+l]==false)
            {
                board[i][l]='Q';
                col[i]=true;
                diag[i-l]=true;
                diag2[i+l]=true;
                find(n,board,l+1,col,diag,diag2);
                board[i][l]='.';
                col[i]=false;
                diag[i-l]=false;
                diag2[i+l]=false;
                
                
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        
        string s;
        vector<string>board;
        for(int i=0;i<n;++i)
            s.push_back('.'); 
        board.resize(n,s);
     
        vector<bool>col(n,false);
        unordered_map<int,bool>diag;
        
        unordered_map<int,bool>diag2;
        
        // vector<vector<bool>>vis(n,vector<bool>(n,false));
        find(n,board,0,col,diag,diag2);
        
        return ans;
        
    }
};