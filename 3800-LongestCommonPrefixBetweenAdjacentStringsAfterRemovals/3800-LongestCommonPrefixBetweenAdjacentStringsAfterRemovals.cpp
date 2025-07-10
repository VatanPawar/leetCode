// Last updated: 7/11/2025, 12:01:54 AM
class Solution {
public:
    int commonPrefix(const string &a, const string &b) {
        int k = 0;
        while (k < a.size() && k < b.size() && a[k] == b[k]) k++;
        return k;
    }

    vector<int> longestCommonPrefix(vector<string>& words) {
        int n = words.size();
        if (n == 1) return {0};  // Edge case

        vector<int> pairs(n-1);
        for (int i = 0; i < n-1; i++) {
            pairs[i] = commonPrefix(words[i], words[i+1]);
        }

        vector<int> prefixMax(n-1), suffixMax(n-1);
        prefixMax[0] = pairs[0];
        for (int i = 1; i < n-1; i++) {
            prefixMax[i] = max(prefixMax[i-1], pairs[i]);
        }
        suffixMax[n-2] = pairs[n-2];
        for (int i = n-3; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i+1], pairs[i]);
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int maxPrefix = 0;

            if (i >= 2) maxPrefix = max(maxPrefix, prefixMax[i-2]);
            if (i+1 <= n-2) maxPrefix = max(maxPrefix, suffixMax[i+1]);

            if (i > 0 && i < n-1) {
                int newPair = commonPrefix(words[i-1], words[i+1]);
                maxPrefix = max(maxPrefix, newPair);
            }

            ans[i] = maxPrefix;
        }

        return ans;
    }
};
