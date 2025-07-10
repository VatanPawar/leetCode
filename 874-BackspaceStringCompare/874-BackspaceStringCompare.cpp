// Last updated: 7/11/2025, 12:06:43 AM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1, j = t.length() - 1, skipS = 0, skipT = 0;
        
        while (i >= 0 || j >= 0) {
            // Process `s`
            while (i >= 0) {
                if (s[i] == '#') { skipS++; i--; }
                else if (skipS > 0) { skipS--; i--; }
                else break;
            }
            
            // Process `t`
            while (j >= 0) {
                if (t[j] == '#') { skipT++; j--; }
                else if (skipT > 0) { skipT--; j--; }
                else break;
            }
            
            // Compare characters
            if (i >= 0 && j >= 0 && s[i] != t[j]) return false;
            if ((i >= 0) != (j >= 0)) return false; // One string is longer
            i--; j--;
        }
        
        return true;
    }
};
