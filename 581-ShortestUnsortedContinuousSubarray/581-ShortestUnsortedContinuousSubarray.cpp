// Last updated: 7/11/2025, 12:07:39 AM
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int start = -1, end = -1;
        int maxSeen = INT_MIN, minSeen = INT_MAX;

        // From left to right: find end
        for (int i = 0; i < n; ++i) {
            maxSeen = max(maxSeen, nums[i]);
            if (nums[i] < maxSeen) {
                end = i;
            }
        }

        // From right to left: find start
        for (int i = n - 1; i >= 0; --i) {
            minSeen = min(minSeen, nums[i]);
            if (nums[i] > minSeen) {
                start = i;
            }
        }

        return (start == -1) ? 0 : (end - start + 1);
    }
};
