// Last updated: 7/11/2025, 12:07:52 AM
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = 1, count = 0;

        while (i < n && j < n) {
            if (i == j || nums[j] - nums[i] < k) {
                j++;
            } else if (nums[j] - nums[i] > k) {
                i++;
            } else {
                count++;
                i++;
                j++;

                // Skip duplicates for i
                while (i < n && nums[i] == nums[i - 1]) i++;
            }
        }

        return count;
    }
};
