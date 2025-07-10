// Last updated: 7/11/2025, 12:07:15 AM
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int, unordered_map<int, int>> dp;

    int solve(int i, vector<int>& arr, int isHolding, int fee) {
        if (i == arr.size()) return 0;

        if (dp[i].count(isHolding)) return dp[i][isHolding];

        if (isHolding == 0) {
            int buy = -arr[i] + solve(i + 1, arr, 1, fee);
            int noBuy = solve(i + 1, arr, 0, fee);
            return dp[i][isHolding] = max(buy, noBuy);
        } else {
            int sell = arr[i] - fee + solve(i + 1, arr, 0, fee);
            int noSell = solve(i + 1, arr, 1, fee);
            return dp[i][isHolding] = max(sell, noSell);
        }
    }

    int maxProfit(vector<int>& prices, int fee) {
        dp.clear();
        return solve(0, prices, 0, fee);
    }
};
