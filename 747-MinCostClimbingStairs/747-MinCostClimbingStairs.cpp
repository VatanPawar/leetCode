// Last updated: 7/11/2025, 12:07:05 AM
class Solution {
public:

    int solve(vector<int>&dp,vector<int>cost,int i){
        if(i>=cost.size()-2 || dp[i]!=-1){
            return 0; 
        }
        solve(dp,cost,i+1);
        dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        return dp[i];
    }

    int solveTab(vector<int>cost){
        int n=cost.size();

        vector<int>dp(cost.size(),-1);
        if(dp.size()<2){
            return 0;
        }
        dp[n-1]=cost[n-1];
        dp[n-2]=cost[n-2];

        for(int i=n-3;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return solveTab(cost);

        int n=cost.size();
        vector<int>dp(cost.size(),-1);
        if(dp.size()<2){
            return 0;
        }
        dp[n-1]=cost[n-1];
        dp[n-2]=cost[n-2];
        
         solve(dp,cost,0);

         for(auto it:dp){
            cout<<it<<" ";
         }
         return min(dp[0],dp[1]);

    }
};