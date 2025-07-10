// Last updated: 7/11/2025, 12:01:57 AM
class Solution {
public:
    // Function to check if the array is non-decreasing
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        // Repeat until the array becomes sorted (non-decreasing)
        while (!isSorted(nums)) {
            int minSum = INT_MAX;
            int index = 0;

            // Find the leftmost adjacent pair with the smallest sum
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    index = i;
                }
            }

            // Merge the selected pair into their sum
            int newElement = nums[index] + nums[index + 1];
            nums.erase(nums.begin() + index);    // Remove the first element of the pair
            nums[index] = newElement;            // Replace second element with the sum

            operations++;  // Count this as one operation
        }

        return operations;
    }
};
