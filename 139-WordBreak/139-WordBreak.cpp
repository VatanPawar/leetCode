// Last updated: 7/11/2025, 12:10:01 AM
class Solution {
  public:
    bool solve(int idx, string &s, unordered_set<string> &st, vector<int> &t) {
        if (idx == s.size()) return true;

        if (t[idx] != -1) return t[idx];

        string temp = "";
        for (int i = idx; i < s.size(); i++) {
            temp += s[i];
            if (st.find(temp) != st.end()) {
                if (solve(i + 1, s, st, t)) return t[idx] = true;
            }
        }

        return t[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        vector<int> t(s.size(), -1);
        return solve(0, s, st, t);
    }
};
