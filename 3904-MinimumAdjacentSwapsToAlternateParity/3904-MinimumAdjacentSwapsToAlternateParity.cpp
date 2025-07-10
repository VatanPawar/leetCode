// Last updated: 7/11/2025, 12:01:38 AM
class Solution {
public:
    int countSwaps(vector<int>& nums, int startParity) {
        int swaps = 0;
        int pos = 0; 

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == startParity) {
                swaps += abs(i - pos);
                pos += 2;
            }
        }
        return swaps;
    }

    int minSwaps(vector<int>& nums) {
        int even = 0, odd = 0;
        for (int num : nums) {
            if (num % 2 == 0) even++;
            else odd++;
        }
        if (abs(even - odd) > 1) return -1;

        if (even > odd)
            return countSwaps(nums, 0); // even starts
        else if (odd > even)
            return countSwaps(nums, 1); // odd starts
        else
            return min(countSwaps(nums, 0), countSwaps(nums, 1));
    }
};
