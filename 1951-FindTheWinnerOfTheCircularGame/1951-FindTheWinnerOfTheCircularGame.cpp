// Last updated: 7/11/2025, 12:04:22 AM
class Solution {
public:
    int findTheWinner(int n, int k) {
         queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    // Eliminate players until one remains
    while (q.size() > 1) {
        // Rotate (k-1) times
        for (int i = 1; i < k; i++) {
            int frontPlayer = q.front();
            q.pop();
            q.push(frontPlayer);
        }
        // Eliminate the k-th player
        q.pop();
    }

    // Return the last remaining player
    return q.front();
    }
};