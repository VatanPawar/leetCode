// Last updated: 7/11/2025, 12:07:47 AM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        queue<pair<int, int>> q;

        // Step 1: Push all 0s into queue, and mark 1s as -1 (unvisited)
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(mat[i][j] == 0){
                    q.push({i, j});
                } else {
                    mat[i][j] = -1;
                }
            }
        }

        // Step 2: BFS from all 0s
        vector<pair<int, int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        while(!q.empty()){
            auto [x, y] = q.front(); q.pop();
            for(auto [dx, dy] : directions){
                int nx = x + dx, ny = y + dy;
                if(nx >= 0 && nx < m && ny >= 0 && ny < n && mat[nx][ny] == -1){
                    mat[nx][ny] = mat[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }

        return mat;
    }
};
