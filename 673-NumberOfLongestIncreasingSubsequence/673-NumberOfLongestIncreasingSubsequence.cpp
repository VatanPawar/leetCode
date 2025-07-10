// Last updated: 7/11/2025, 12:07:23 AM
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> dp(n, 1);     // dp[i] = length of LIS ending at i
        vector<int> count(n, 1);  // count[i] = number of LIS of length dp[i]

        int maxLen = 1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    } else if (dp[j] + 1 == dp[i]) {
                        count[i] += count[j];
                    }
                }
            }
            maxLen = max(maxLen, dp[i]);
        }

        int result = 0;
        for (int i = 0; i < n; ++i) {
            if (dp[i] == maxLen) {
                result += count[i];
            }
        }

        return result;
    }
};
