// Last updated: 7/11/2025, 12:02:17 AM
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> orMap;  // OR value -> min length
        int ans = INT_MAX;

        for (int num : nums) {
            unordered_map<int, int> newMap;
            newMap[num] = 1;  // start a new subarray with this number

            for (auto& [val, len] : orMap) {
                int newOr = val | num;
                if (newMap.find(newOr) == newMap.end() || newMap[newOr] > len + 1) {
                    newMap[newOr] = len + 1;
                }
            }

            for (auto& [val, len] : newMap) {
                if (val >= k) {
                    ans = min(ans, len);
                }
            }

            swap(orMap, newMap);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
