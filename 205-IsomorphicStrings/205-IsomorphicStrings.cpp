// Last updated: 7/11/2025, 12:09:32 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mapST; // s -> t
        unordered_map<char, char> mapTS; // t -> s

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i], c2 = t[i];

            // If mapping doesn't exist, create it
            if (mapST.find(c1) == mapST.end() && mapTS.find(c2) == mapTS.end()) {
                mapST[c1] = c2;
                mapTS[c2] = c1;
            } 
            else {
                // If mapping exists but inconsistent, return false
                if (mapST[c1] != c2 || mapTS[c2] != c1) {
                    return false;
                }
            }
        }
        return true;
    }
};
