class Solution {
    unordered_map<int, int64_t> memo;
 
int catlan(int n) {
    if (n <= 1) return 1;
    if (memo.find(n) != memo.end()) {
        // avoid duplicate calculations       
        return memo[n];
    }
    int res = 0;
    for (int i = 0; i < n; i ++) {
        res += catlan(i) * catlan(n - i - 1);
    }
    memo[n] = res; // store into the memo
    return res;
}
public:
    int numTrees(int n) {
   return catlan(n);     
    }
};