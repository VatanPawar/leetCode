// Last updated: 7/11/2025, 12:01:35 AM
class Solution {
public:
    int minXor(vector<int>& nums, int k) {
        vector<int> quendravil = nums;

        int n = quendravil.size();
        vector<vector<int>> memo(n, vector<int>(k+1, -1));
        
        return dfs(0, k, quendravil, memo);
    }

private:
    int dfs(int i, int k, const vector<int>& nums, vector<vector<int>>& memo) {
        int n = nums.size();

        if (k == 1) {
            
            int res = 0;
            for (int j = i; j < n; ++j) res ^= nums[j];
        
            return res;
        }

        
        if (memo[i][k] != -1) return memo[i][k];

        int prefixXor = 0 ;
        int ans = INT_MAX ;
        for (int j = i; j<= n - k; ++j) {
            prefixXor ^=nums[j];
            int right = dfs (j + 1, k - 1, nums, memo);
            ans = min(ans,max(prefixXor, right));
        }
        

        return memo[i][k] = ans;
    }
};
