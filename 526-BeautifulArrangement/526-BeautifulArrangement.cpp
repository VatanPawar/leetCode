// Last updated: 7/11/2025, 12:07:56 AM
class Solution {
public:
    void solution(vector<int>& ans, int position, int& count, int n) {
        // Base case: if all positions are filled, increment count
        if (position > n) {
            count++;
            return;
        }

        // Try all numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            // Check if the number is not used and satisfies the condition
            if (find(ans.begin(), ans.end(), i) == ans.end() && 
                (position % i == 0 || i % position == 0)) {
                ans.push_back(i);  // Add the number to the arrangement
                solution(ans, position + 1, count, n);  // Recursive call for the next position
                ans.pop_back();  // Backtrack
            }
        }
    }

    int countArrangement(int n) {
        vector<int> ans;
        int count = 0;
        solution(ans, 1, count, n);
        return count;
    }
};
