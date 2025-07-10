// Last updated: 7/11/2025, 12:04:56 AM
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if (n < k) return false;

        unordered_set<int> seen;
        int total = 1 << k;         // Total number of k-length binary codes
        int hash = 0;               // Rolling hash to store k-length window
        int mask = total - 1;       // Bitmask to keep only last k bits
        int i = 0, j = 0;

        // Build the first (k-1) bits
        while (j < k - 1) {
            hash = (hash << 1) | (s[j] - '0');
            j++;
        }

        // Main sliding window
        while (j < n) {
            hash = ((hash << 1) & mask) | (s[j] - '0');  // Slide and mask
            seen.insert(hash);                           // Add pattern to set
            if (seen.size() == total) return true;       // Early exit if all found
            j++;
        }

        return seen.size() == total;
    }
};
