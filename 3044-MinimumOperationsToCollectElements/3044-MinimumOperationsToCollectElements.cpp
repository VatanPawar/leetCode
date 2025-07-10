// Last updated: 7/11/2025, 12:03:02 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long  ans = 0;
        long long  t = 0;
        long long  req = 0;
        
        // Set bits from 1 to k
        for (int i = 1; i <= k; i++) {
            req |= (1LL << i);
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            ans++;
            t |= (1LL << nums[i]);
            if ((t & req) == req) {
                return ans;
            }
        }
        return ans;
    }
};
