// Last updated: 7/11/2025, 12:07:57 AM
class Solution {
public:
    int memo(int i, int amount, vector<int>& coins, vector<vector<int>> &dp) {
        if(amount == 0) return 1;
        if(i < 0 || amount < 0) return 0;

        if(dp[i][amount] != -1) return dp[i][amount];

        // Choice: take or not take
        int notTake = memo(i - 1, amount, coins, dp);
        int take = 0;
        if(coins[i] <= amount) {
            take = memo(i, amount - coins[i], coins, dp); // stay at i (unbounded)
        }

        return dp[i][amount] = take + notTake;
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return memo(n - 1, amount, coins, dp);
    }
};
