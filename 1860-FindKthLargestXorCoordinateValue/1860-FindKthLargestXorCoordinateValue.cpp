// Last updated: 7/11/2025, 12:04:32 AM
class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> prefixXOR(m, vector<int>(n));
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap to keep top k largest values

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int xorVal = matrix[i][j];
                if(i > 0) xorVal ^= prefixXOR[i-1][j];
                if(j > 0) xorVal ^= prefixXOR[i][j-1];
                if(i > 0 && j > 0) xorVal ^= prefixXOR[i-1][j-1];
                
                prefixXOR[i][j] = xorVal;
                
                pq.push(xorVal);
                if(pq.size() > k) pq.pop(); // keep only top k largest
            }
        }

        return pq.top(); // kth largest
    }
};
