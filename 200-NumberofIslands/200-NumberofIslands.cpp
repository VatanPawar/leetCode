// Last updated: 7/11/2025, 10:43:24 AM
class Solution {
public:
    unordered_map<int, unordered_map<int, vector<pair<int, int>>>> mp;
    unordered_map<int, unordered_map<int, bool>> visited;
    int m, n;

    void makeGraph(vector<vector<char>>& arr) {
        n = arr.size();         // Fix: use class member, not local shadow
        m = arr[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == '0') continue;

                // check right
                if (j + 1 < m && arr[i][j + 1] == '1') {
                    mp[i][j].push_back({i, j + 1});
                    mp[i][j + 1].push_back({i, j});
                }

                // check left
                if (j - 1 >= 0 && arr[i][j - 1] == '1') {
                    mp[i][j].push_back({i, j - 1});
                    mp[i][j - 1].push_back({i, j});
                }

                // check top
                if (i - 1 >= 0 && arr[i - 1][j] == '1') {
                    mp[i][j].push_back({i - 1, j});
                    mp[i - 1][j].push_back({i, j});
                }

                // check bottom
                if (i + 1 < n && arr[i + 1][j] == '1') {
                    mp[i][j].push_back({i + 1, j});
                    mp[i + 1][j].push_back({i, j});
                }
            }
        }
    }

    void markVisited(int sx, int sy) {
        if (sx < 0 || sx >= n || sy < 0 || sy >= m || visited[sx][sy]) return;

        visited[sx][sy] = true;
        cout << sx << " " << sy << endl;

        for (auto it : mp[sx][sy]) {
            int x = it.first;
            int y = it.second;
            if (!visited[x][y]) {
                markVisited(x, y);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        makeGraph(grid);
        int c = 0;
        n = grid.size(); 
        m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '0') continue;

                if (!visited[i][j] && grid[i][j] == '1') {
                    cout << i << " - " << j << endl;
                    markVisited(i, j); // Fix: move this inside the condition
                    c++;
                }
            }
        }
        return c;
    }
};
