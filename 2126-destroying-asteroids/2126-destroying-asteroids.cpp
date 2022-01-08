// #define long  int
class Solution {
    
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast ) {
      
        long long sum=mass;
    sort(ast.begin(),ast.end());
        for(auto &it:ast)
        {
            if(it>sum)
                return false;
            sum+=it;
        }
        return true;
    }
};