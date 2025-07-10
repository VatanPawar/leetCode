// Last updated: 7/11/2025, 12:04:48 AM
class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;

        // Step 1: Build histogram-like matrix
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    mat[i][j] += mat[i - 1][j];
                }
            }
        }

        // Step 2: For each row, count submatrices ending at each position
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 0) continue;
                int minHeight = mat[i][j];
                for (int k = j; k >= 0; --k) {
                    if (mat[i][k] == 0) break;
                    minHeight = min(minHeight, mat[i][k]);
                    count += minHeight;
                }
            }
        }

        return count;
    }
};
