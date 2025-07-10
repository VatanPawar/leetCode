// Last updated: 7/11/2025, 12:08:52 AM
class Solution {
public:
    int memo(vector<int>& coins, int amount, vector<int> &dp){
        if(amount==0)   return 0;
        if(amount<0)    return INT_MAX;
        if(dp[amount]!= -1) return dp[amount];
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = memo(coins, amount-coins[i],dp);
            if(ans!=INT_MAX)
                mini = min(mini, ans+1);
        }
        return dp[amount] = mini;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int temp= memo( coins,amount, dp);
        if(temp==INT_MAX){
            return -1;
        }
        return temp;
    }
};
