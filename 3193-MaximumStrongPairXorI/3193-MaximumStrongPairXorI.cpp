// Last updated: 7/11/2025, 12:02:59 AM
class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int max = INT_MIN;

        for (int i = 0; i < nums.size(); ++i) {

            for (int j = 0; j < nums.size(); ++j) {

                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) {
                    if (max < (nums[i] ^ nums[j])) {
                        max = nums[i] ^ nums[j];
                    }
                }
            }
        }

        return max;
    }
};