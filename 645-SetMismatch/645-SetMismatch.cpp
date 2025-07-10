// Last updated: 7/11/2025, 12:07:31 AM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xorAll = 0;
        int n = nums.size();
        
        // Step 1: xor all numbers from 1 to n and elements in nums
        for (int i = 0; i < n; i++) {
            xorAll ^= nums[i];     // xor from array
            xorAll ^= (i + 1);     // xor from 1 to n
        }
        
        // xorAll = x ^ y (duplicate ^ missing)
        
        // Step 2: Get rightmost set bit (to separate x and y)
        int diffBit = xorAll & -xorAll;
        
        int x = 0, y = 0;
        
        // Step 3: Partition into two groups based on diffBit
        for (int i = 0; i < n; i++) {
            if (nums[i] & diffBit)
                x ^= nums[i];
            else
                y ^= nums[i];
                
            if ((i + 1) & diffBit)
                x ^= (i + 1);
            else
                y ^= (i + 1);
        }
        
        // Step 4: Determine which one is missing or duplicate
        for (int val : nums) {
            if (val == x) return {x, y};  // x is duplicate
        }
        return {y, x};  // y is duplicate
    }
};
