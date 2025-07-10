// Last updated: 7/11/2025, 12:03:32 AM
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        // priority_queue<pair<int,int>> pq; // not used
        unordered_map<int, vector<int>> freq;
        int sum = -1;

        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int t = 0;
            while(temp > 0) {
                t += temp % 10;
                temp /= 10;
            }
            freq[t].push_back(nums[i]); // fixed: push number into vector for digit sum 't'
        }

        for(auto it : freq) {
            vector<int>& v = it.second;
            if(v.size() >= 2) {
                sort(v.begin(), v.end(), greater<int>());
                int x = v[0] + v[1];
                sum = max(sum, x);
            }
        }

        return sum;
    }
};
