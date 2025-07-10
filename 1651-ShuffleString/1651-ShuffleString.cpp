// Last updated: 7/11/2025, 12:04:47 AM
class Solution {
public:
    string restoreString(string& s, vector<int>& indices) {
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            // Put s[i] to the right place until it is already correct
            while (indices[i] != i) {
                // swap s[i] with s[indices[i]]
                swap(s[i], s[indices[i]]);
                // also swap the indices to keep track
                swap(indices[i], indices[indices[i]]);
            }
        }
        return s;
    }
};
