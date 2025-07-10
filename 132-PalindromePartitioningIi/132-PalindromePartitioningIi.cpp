// Last updated: 7/11/2025, 12:10:03 AM
class Solution {
public:
    vector<vector<int>> t;
    vector<vector<bool>> pal;

    void precomputePalindromes(string &s) {
        int n = s.size();
        pal = vector<vector<bool>>(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++) pal[i][i] = true;

        for(int len = 2; len <= n; len++) {
            for(int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if(len == 2)
                    pal[i][j] = (s[i] == s[j]);
                else
                    pal[i][j] = (s[i] == s[j]) && pal[i + 1][j - 1];
            }
        }
    }

    int solve(string &s, int i, int j) {
        if (i >= j) return 0;
        if (pal[i][j]) return 0;

        if (t[i][j] != -1) return t[i][j];

        int ans = INT_MAX;
        for (int k = i; k < j; k++) {
            if (pal[i][k]) {
                int temp = 1 + solve(s, k + 1, j);
                ans = min(ans, temp);
            }
        }
        return t[i][j] = ans;
    }

    int minCut(string &s) {
        int n = s.size();
        t = vector<vector<int>>(n, vector<int>(n, -1));
        precomputePalindromes(s);
        return solve(s, 0, n - 1);
    }
};
