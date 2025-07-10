// Last updated: 7/11/2025, 12:01:40 AM
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        long long ans = 0;

        unordered_map<int, int> rightCount;
        for (int val : nums) {
            rightCount[val]++;
        }

        unordered_map<int, int> leftCount;

        for (int j = 0; j < n; ++j) {
            rightCount[nums[j]]--;  // Current j is no longer in the right part

            int val = nums[j] * 2;
            long long left = leftCount[val];
            long long right = rightCount[val];

            ans = (ans + (left * right) % MOD) % MOD;

            leftCount[nums[j]]++;  // Include current j in left for future iterations
        }

        return ans;
    }
};
