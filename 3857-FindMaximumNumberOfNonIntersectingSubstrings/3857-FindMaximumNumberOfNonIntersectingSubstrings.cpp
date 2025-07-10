// Last updated: 7/11/2025, 12:01:42 AM
class Solution {
public:
    int maxSubstrings(string word) {
        int n = word.size();
        vector<pair<int, int>> intervals;

        // Step 1: Collect all valid substrings
        for (int i = 0; i < n; ++i) {
            for (int j = i + 3; j < n; ++j) {
                if (word[i] == word[j]) {
                    intervals.push_back({i, j});
                    break; // take the shortest one starting at i
                }
            }
        }

        // Step 2: Sort by ending index
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        // Step 3: Greedy interval selection
        int count = 0;
        int lastEnd = -1;

        for (auto& interval : intervals) {
            if (interval.first > lastEnd) {
                count++;
                lastEnd = interval.second;
            }
        }

        return count;
    }
};
