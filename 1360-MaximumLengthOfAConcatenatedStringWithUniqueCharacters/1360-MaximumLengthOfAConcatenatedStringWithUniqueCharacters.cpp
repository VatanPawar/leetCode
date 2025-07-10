// Last updated: 7/11/2025, 12:05:24 AM
class Solution {
public:
    void solve(int index, int &res, int temp, vector<int>& bitmasks) {
        int len = __builtin_popcount(temp);
        res = max(res, len);

        for (int i = index; i < bitmasks.size(); i++) {
            if ((temp & bitmasks[i]) == 0) { // no overlapping characters
                solve(i + 1, res, temp | bitmasks[i], bitmasks);
            }
        }
    }

    int maxLength(vector<string>& arr) {
        vector<int> bitmasks;

        for (string &s : arr) {
            unordered_set<char> st(s.begin(), s.end());
            if (st.size() != s.size()) continue; // skip strings with duplicate characters

            int val = 0;
            for (char ch : s) {
                val |= (1 << (ch - 'a')); // set the bit for this character
            }

            bitmasks.push_back(val);
        }

        int res = 0;
        solve(0, res, 0, bitmasks);
        return res;
    }
};