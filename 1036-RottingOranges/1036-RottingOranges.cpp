// Last updated: 7/11/2025, 12:06:06 AM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int count = 0;

        for (int k = 0; k < m * n; k++) {
            bool flag = true;
            vector<vector<int>> temp = arr;  // copy to store changes this round

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (arr[i][j] == 2) {
                        if (i + 1 < m && arr[i + 1][j] == 1) {
                            temp[i + 1][j] = 2;
                            flag = false;
                        }
                        if (i - 1 >= 0 && arr[i - 1][j] == 1) {
                            temp[i - 1][j] = 2;
                            flag = false;
                        }
                        if (j + 1 < n && arr[i][j + 1] == 1) {
                            temp[i][j + 1] = 2;
                            flag = false;
                        }
                        if (j - 1 >= 0 && arr[i][j - 1] == 1) {
                            temp[i][j - 1] = 2;
                            flag = false;
                        }
                    }
                }
            }

            if (flag) break;  // no changes this round, stop loop

            arr = temp;       // apply the changes
            count++;          // one minute passed
        }

        // check if any fresh orange remains
        for (auto& row : arr) {
            for (auto& cell : row) {
                if (cell == 1) return -1;
            }
        }

        return count;
    }
};
