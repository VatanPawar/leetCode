// Last updated: 7/11/2025, 12:10:45 AM
class Solution {
public:
    int findBS(const vector<int>& a, int k) {
        int low = 0;
        int high = a.size() - 1;
        int ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (a[mid] <= k) {
                ans = mid;  // Update ans as this might be our closest result
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
    
    int mySqrt(int x) {
        int maxIdx = min(46340, x); // 46340^2 is the largest perfect square <= INT_MAX
        vector<int> hash(maxIdx + 1);
        
        for (int i = 0; i <= maxIdx; ++i) {
            hash[i] = i * i;
        }
        
        int ans = findBS(hash, x);
        return ans;
    }
};
