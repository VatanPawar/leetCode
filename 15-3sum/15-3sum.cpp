// Last updated: 7/11/2025, 12:11:21 AM

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());  // Sort the array
        
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements to avoid repeated triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;  // Left pointer
            int right = nums.size() - 1;  // Right pointer
            int target = -nums[i];  // We are looking for two numbers that sum to -nums[i]

            while (left < right) {
                int sum = nums[left] + nums[right];

                if (sum == target) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicate elements to avoid repeated triplets
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move the pointers to the next unique elements
                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++;  // We need a larger sum, so move the left pointer to the right
                } 
                else {
                    right--;  // We need a smaller sum, so move the right pointer to the left
                }
            }
        }
        
        return result;
    }
};


