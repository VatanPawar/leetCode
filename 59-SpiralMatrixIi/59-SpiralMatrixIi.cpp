// Last updated: 7/11/2025, 12:10:51 AM
class Solution {
public:
    void top(int idx, int start, int end, int &el, vector<vector<int>>& arr) {
        for (int i = start; i <= end; i++) {
            arr[idx][i] = el++;
        }
    }

    void bottom(int idx, int start, int end, int &el, vector<vector<int>>& arr) {
        for (int i = end; i >= start; i--) {
            arr[idx][i] = el++;
        }
    }

    void right(int idx, int start, int end, int &el, vector<vector<int>>& arr) {
        for (int i = start; i <= end; i++) {
            arr[i][idx] = el++;
        }
    }

    void left(int idx, int start, int end, int &el, vector<vector<int>>& arr) {
        for (int i = end; i >= start; i--) {
            arr[i][idx] = el++;
        }
    }

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, -1));
        int topIdx = 0, bottomIdx = n - 1;
        int leftIdx = 0, rightIdx = n - 1;
        int el = 1;

        while (el <= n * n) {
            // Fill top row
            top(topIdx, leftIdx, rightIdx, el, ans);
            topIdx++;

            // Fill right column
            right(rightIdx, topIdx, bottomIdx, el, ans);
            rightIdx--;

            // Fill bottom row (only if still within bounds)
            if (topIdx <= bottomIdx)
                bottom(bottomIdx, leftIdx, rightIdx, el, ans);
            bottomIdx--;

            // Fill left column (only if still within bounds)
            if (leftIdx <= rightIdx)
                left(leftIdx, topIdx, bottomIdx, el, ans);
            leftIdx++;
        }

        return ans;
    }
};
