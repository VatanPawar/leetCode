// Last updated: 7/11/2025, 12:02:13 AM
class Solution {
public:

    int countDays(int days, vector<vector<int>>& meetings) {
        int n = meetings.size();

        sort(meetings.begin(),meetings.end());
        int count = 0;

        vector<vector<int>> merged;
        merged.push_back(meetings[0]);

        for (int i = 1; i < n; i++) {
            
            if (meetings[i][0] <= merged.back()[1]) {
                merged.back()[1] = max(merged.back()[1], meetings[i][1]);
            } else {
                merged.push_back(meetings[i]);
            }
        }


        int occupiedDays = 0;
        for (const auto& interval : merged) {
            occupiedDays += (interval[1] - interval[0] + 1);
        }

        return days - occupiedDays;
    }
};