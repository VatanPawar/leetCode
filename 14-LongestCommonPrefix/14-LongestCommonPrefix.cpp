// Last updated: 7/11/2025, 12:11:23 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int i = 0;
        while (true) {
            if (i >= strs[0].size()) break;
            char ch = strs[0][i];
            for (const auto& s : strs) {
                if (i >= s.size() || s[i] != ch) {
                    return strs[0].substr(0, i);
                }
            }
            i++;
        }
        return strs[0].substr(0, i);
    }
};
