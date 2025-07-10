// Last updated: 7/11/2025, 12:03:36 AM
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int low = 1, high = n;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total = 1LL * mid * (mid + 1) / 2;

            if (total <= n) {
                ans = mid;       // valid, try for more
                low = mid + 1;
            } else {
                high = mid - 1;  // too large
            }
        }

        return ans;
    }
};
