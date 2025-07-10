// Last updated: 7/11/2025, 12:03:03 AM
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        if (nums.size() == 1) return -1;
        if (nums.size() == 2) return 0;

        unordered_map<int, int> hash1;
        vector<int> a(nums.size(), -1);
        int dom1 = nums[0], n = nums.size();

        // Calculate dominant elements from left to right
        for (int i = 0; i < n; i++) {
            hash1[nums[i]]++;
            if (hash1[nums[i]] > hash1[dom1]) {
                dom1 = nums[i];
            }
            if (hash1[dom1] * 2 > (i + 1)) { // Corrected condition
                a[i] = dom1;
            }
        }

        unordered_map<int, int> hash2;
        vector<int> b(nums.size(), -1);
        int dom2 = nums[n - 1];

        // Calculate dominant elements from right to left
        for (int i = n - 1, j = 1; i >= 0; i--, j++) {
            hash2[nums[i]]++;
            if (hash2[nums[i]] > hash2[dom2]) {
                dom2 = nums[i];
            }
            if (hash2[dom2] * 2 > j) { // Corrected condition
                b[i] = dom2;
            }
        }

        // Find the first valid split index
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == b[i + 1] && a[i] != -1) {
                return i;
            }
        }

        return -1;
    }
};
