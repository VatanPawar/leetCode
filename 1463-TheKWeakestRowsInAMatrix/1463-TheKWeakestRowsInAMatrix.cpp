// Last updated: 7/11/2025, 12:05:10 AM
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for (int i = 0; i < mat.size(); i++) {
            int ones = count(mat[i].begin(), mat[i].end(), 1);
            pq.push({ones, i});  // {number of soldiers, row index}
        }

        vector<int> ans;
        while (k-- && !pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
