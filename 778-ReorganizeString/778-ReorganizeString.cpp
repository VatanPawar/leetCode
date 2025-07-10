// Last updated: 7/11/2025, 12:06:59 AM
class Solution {
public:
    string reorganizeString(string s) {
        vector<int> arr(26, 0);
        for (char c : s) {
            arr[c - 'a']++;
        }

        // Find the character with the maximum frequency
        int maxi = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] > arr[maxi]) {
                maxi = i;
            }
        }

        int max_freq = arr[maxi];
        if (max_freq > (s.size() + 1) / 2) {
            return "";  // Not possible to reorganize
        }

        string ans = s;
        int i = 0;
        char ch = maxi + 'a';

        // Place the most frequent character at even indices
        while (max_freq > 0) {
            ans[i] = ch;
            i += 2;
            max_freq--;
        }
        arr[maxi] = 0;

        // Get the order of characters as they appear in input
        set<char> seen;
        vector<char> order;
        for (char c : s) {
            if (!seen.count(c)) {
                order.push_back(c);
                seen.insert(c);
            }
        }

        // Fill remaining characters in original order
        int j = 0;
        for (char c : order) {
            while (arr[c - 'a'] > 0) {
                if (i >= s.size()) i = 1; // move to odd index after evens are full
                ans[i] = c;
                i += 2;
                arr[c - 'a']--;
            }
        }

        return ans;
    }
};
