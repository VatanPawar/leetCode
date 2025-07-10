// Last updated: 7/11/2025, 12:08:59 AM
class NumMatrix {
public:
    vector<vector<int>> x;
    unordered_map<int, vector<int>> rowPrefix;

    NumMatrix(vector<vector<int>>& matrix) {
        x = matrix;
        for (int i = 0; i < x.size(); i++) {
            vector<int> prefix(x[0].size(), 0);
            prefix[0] = x[i][0];
            for (int j = 1; j < x[0].size(); j++) {
                prefix[j] = prefix[j - 1] + x[i][j];
            }
            rowPrefix[i] = prefix;
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int i = row1; i <= row2; i++) {
            if (col1 == 0) {
                sum += rowPrefix[i][col2];
            } else {
                sum += rowPrefix[i][col2] - rowPrefix[i][col1 - 1];
            }
        }
        return sum;
    }
};
