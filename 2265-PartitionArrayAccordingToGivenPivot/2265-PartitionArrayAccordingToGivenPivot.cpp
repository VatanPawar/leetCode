// Last updated: 7/11/2025, 12:03:53 AM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;  // Extra space O(n)

        // First, add elements < pivot
        for (int num : nums) {
            if (num < pivot) result.push_back(num);
        }

        // Then, add elements == pivot
        for (int num : nums) {
            if (num == pivot) result.push_back(num);
        }

        // Finally, add elements > pivot
        for (int num : nums) {
            if (num > pivot) result.push_back(num);
        }

        return result;  // O(n) extra space
    }
};
