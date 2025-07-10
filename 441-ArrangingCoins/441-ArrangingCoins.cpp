// Last updated: 7/11/2025, 12:08:16 AM
class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 0, h = n;
        while (l <= h) {
            long long mid = l + (h - l) / 2;
            long long temp = mid * (mid + 1) / 2; // Corrected formula and data type
            
            if (temp == n) return mid;
            else if (temp > n) h = mid - 1;
            else l = mid + 1;
        }
        return h; // The highest valid full row count
    }
};
