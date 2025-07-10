// Last updated: 7/11/2025, 12:07:06 AM
class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int l = 0, h = arr.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (arr[mid] > target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return arr[l % arr.size()];
    }
};
