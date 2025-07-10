// Last updated: 7/11/2025, 12:09:04 AM
class Solution {
public:
    int solve(int n,vector<int>&dp) {
        if (n == 0) return 0;
        if (n < 0) return INT_MAX;
        if(dp[n]!=-1){
            return dp[n];
        }

        int final = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            int sub = solve(n - i * i,dp);
            if (sub != INT_MAX)
                final = min(final, 1 + sub); // count the square used
        }

        return dp[n]=final;
    }

    int numSquares(int n) {
vector<int>dp(n+1,-1);

        return solve(n,dp);
    }
};
