// Last updated: 7/11/2025, 12:05:41 AM
class Solution {
public:
    void solve(string given, string ans, vector<string> &final, int i, string check) {
        if (i >= given.length()) {
            return;
        }
        for (int j = 0; j < given.size(); j++) {
            if (check[j] == 'F') {
                ans = ans + given[j];
                final.push_back(ans); // Add the current combination
                check[j] = 'T';       // Mark as used
                
                // Recursion
                solve(given, ans, final, i + 1, check);
                
                // Backtrack
                check[j] = 'F';       // Unmark as used
                ans.pop_back();       // Remove the last character
            }
        }
        return;
    }

    int numTilePossibilities(string tiles) {
        string ans = "";
        string check(tiles.size(), 'F'); // Correct initialization of the check string

        vector<string> final;
        int i = 0;

        // Generate all combinations
        solve(tiles, ans, final, i, check);

        // Use a set to count unique combinations
        set<string> s(final.begin(), final.end());
        return s.size();
    }
};
