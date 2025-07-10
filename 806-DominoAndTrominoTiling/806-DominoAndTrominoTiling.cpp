// Last updated: 7/11/2025, 12:06:51 AM
class Solution {
public:
    unordered_map<int, int> dp;

    int solve(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;

        if (dp.count(n)) return dp[n];

        int two = 2 *( solve(n - 1) % 1000000007);
        int three = (solve(n - 3) % 1000000007);

        return dp[n] =( (two % 1000000007 + three % 1000000007) % 1000000007);
    }

    int numTilings(int n) {
        return solve(n);
    }
};
