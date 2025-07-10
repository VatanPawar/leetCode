// Last updated: 7/11/2025, 12:06:13 AM
class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        unordered_map<string, int> seen;
        bool cycleFound = false;
        int cycleLength = 0;

        for (int i = 0; i < n; i++) {
            vector<int> next(8, 0);
            for (int j = 1; j < 7; j++) {
                next[j] = cells[j - 1] == cells[j + 1] ? 1 : 0;
            }

            string state = vecToStr(next);

            if (seen.count(state)) {
                // Cycle found
                int previousDay = seen[state];
                cycleLength = i - previousDay;
                int remaining = (n - i - 1) % cycleLength;
                return prisonAfterNDays(next, remaining);
            } else {
                seen[state] = i;
            }

            cells = next;
        }

        return cells;
    }

    string vecToStr(vector<int>& v) {
        string s;
        for (int i : v) s += to_string(i);
        return s;
    }
};
