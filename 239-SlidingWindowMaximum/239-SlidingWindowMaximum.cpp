// Last updated: 7/11/2025, 12:09:09 AM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int i = 0, j = 0;
        int n = nums.size();

        while (j < n) {
            // logic
            while (!dq.empty() && nums[dq.back()] < nums[j]) {
                dq.pop_back();
            }
            dq.push_back(j);

            // j++ condition 
            if (j - i + 1 < k) {
                j++;
            } 
            //ans + slide the window
            else if (j - i + 1 == k) {
                ans.push_back(nums[dq.front()]);
                if (dq.front() == i) {
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};
