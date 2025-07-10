// Last updated: 7/11/2025, 12:04:28 AM
class Solution {
public:
    bool canSplit(vector<int>& nums, int maxSize, int maxOperations) {
        int splits = 0;
        for (int x : nums) {
            splits += (x - 1) / maxSize; // splits needed to make x <= maxSize
            if (splits > maxOperations) return false; // early stop
        }
        return splits <= maxOperations;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canSplit(nums, mid, maxOperations)) {
                right = mid; // can do with this max size, try smaller
            } else {
                left = mid + 1; // can't do, increase max size
            }
        }
        return left;
    }
};
