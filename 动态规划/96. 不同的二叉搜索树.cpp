class Solution {
public:
    int numTrees(int n) {
        /*---method 1:dp 子树动态规划---*/
        vector<int> dp(n+1);
        dp[0] = 1;
        for (int i=1;i <= n;i++) {
            for (int j=1;j <= i;j++) {
                dp[i] += dp[j-1] * dp[i-j];
            }
        }
        return dp[n];
    }
};