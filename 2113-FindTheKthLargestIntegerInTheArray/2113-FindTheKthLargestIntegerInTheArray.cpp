// Last updated: 7/11/2025, 12:04:07 AM
class Solution {
public:
    struct cmp {
        bool operator()(const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() < b.size(); // smaller size means smaller number
            }
            return a < b; // if size same, do normal lexicographical comparison
        }
    };

    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, cmp> pq; 
        
        for (auto& it : nums) {
            pq.push(it);
        }
        
        string ans;
        while (k-- && !pq.empty()) {
            ans = pq.top(); 
            pq.pop(); 
        }
        
        return ans;
    }
};
