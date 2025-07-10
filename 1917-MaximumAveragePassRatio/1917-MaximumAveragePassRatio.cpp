// Last updated: 7/11/2025, 12:04:24 AM
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto gain = [](int pass, int total) {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };

        // max heap by gain
        priority_queue<pair<double, pair<int, int>>> pq;

        for (auto& cls : classes) {
            pq.push({gain(cls[0], cls[1]), {cls[0], cls[1]}});
        }

        // Assign all extra students
        while (extraStudents--) {
            auto [_, cls] = pq.top(); pq.pop();
            int pass = cls.first, total = cls.second;
            pass += 1;
            total += 1;
            pq.push({gain(pass, total), {pass, total}});
        }

        // Calculate final average
        double totalAvg = 0.0;
        while (!pq.empty()) {
            auto [_, cls] = pq.top(); pq.pop();
            totalAvg += (double)cls.first / cls.second;
        }

        return totalAvg / classes.size();
    }
};
