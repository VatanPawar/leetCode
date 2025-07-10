// Last updated: 7/11/2025, 12:01:41 AM
class Solution {
public:
    int minOpsToMakeAll(vector<int> nums, int target) {
        int ops = 0;
        for(int i = 0; i < nums.size() - 1; ++i) {
            if(nums[i] != target) {
                // Flip nums[i] and nums[i+1]
                nums[i] *= -1;
                nums[i+1] *= -1;
                ops++;
            }
        }
        // After all flips, check if last element is target
        if(nums.back() != target) return 1e9; // impossible
        return ops;
    }

    bool canMakeEqual(vector<int>& nums, int k) {
        int makeAll1 = minOpsToMakeAll(nums, 1);
        int makeAllMinus1 = minOpsToMakeAll(nums, -1);
        return min(makeAll1, makeAllMinus1) <= k;
    }
};
