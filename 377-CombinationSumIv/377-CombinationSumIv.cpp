// Last updated: 7/11/2025, 12:08:35 AM
class Solution {
public:
    int solve(int tgt, vector<int>& nums, vector<int>& dp) {
        if (tgt == 0) return 1;
        if (tgt < 0) return 0;
        if (dp[tgt] != -1) return dp[tgt];

        int ways = 0;
        for (int i = 0; i < nums.size(); i++) {
            ways += solve(tgt - nums[i], nums, dp);
        }

        return dp[tgt] = ways;
    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);
        return solve(target, nums, dp);
    }
};
