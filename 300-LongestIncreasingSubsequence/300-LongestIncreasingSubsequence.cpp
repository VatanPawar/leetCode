// Last updated: 7/11/2025, 12:09:00 AM
class Solution {
private:
    vector<vector<int>> t;

public:
    int solve(int curr, int n, vector<int>& arr) {
        if (n == 0) return 0;

        // Shift curr by +1 to avoid negative indexing
        if (t[curr + 1][n] != -1) return t[curr + 1][n];

        int exc = solve(curr, n - 1, arr);
        int inc = 0;

        if (curr == -1 || arr[n - 1] < arr[curr]) {
            inc = 1 + solve(n - 1, n - 1, arr);
        }

        return t[curr + 1][n] = max(inc, exc);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // Size is (n+1) x (n+1) because curr can be -1 to n-1
        t = vector<vector<int>>(n + 1, vector<int>(n + 1, -1));
        return solve(-1, n, nums);
    }
};
