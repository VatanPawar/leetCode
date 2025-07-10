// Last updated: 7/11/2025, 12:04:02 AM
class Solution {
public:
    int maxOr = 0;
    int count = 0;

    void backtrack(vector<int>& nums, int index, int currentOr) {
        if (index == nums.size()) {
            if (currentOr == maxOr) count++;
            return;
        }

        // Include current element
        backtrack(nums, index + 1, currentOr | nums[index]);
        // Exclude current element
        backtrack(nums, index + 1, currentOr);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        for (int num : nums) {
            maxOr |= num;  // Calculate maximum OR possible
        }
        backtrack(nums, 0, 0);
        return count;
    }
};
// 