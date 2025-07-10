// Last updated: 7/11/2025, 12:08:56 AM
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        // Length of the subarray
        for (int len = 1; len <= n; ++len) {
            for (int left = 1; left <= n - len + 1; ++left) {
                int right = left + len - 1;
                for (int i = left; i <= right; ++i) {
                    dp[left][right] = max(
                        dp[left][right],
                        dp[left][i - 1] + nums[left - 1] * nums[i] * nums[right + 1] + dp[i + 1][right]
                    );
                }
            }
        }

        return dp[1][n];  // dp from 1 to n (excluding the virtual 1s at ends)
    }
};
