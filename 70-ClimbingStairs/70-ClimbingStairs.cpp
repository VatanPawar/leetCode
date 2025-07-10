// Last updated: 7/11/2025, 12:10:44 AM
class Solution {
public:
    void solve(vector<int>&dp,int i,int n){
        if(i==n || i== n-1){
            dp[n]=1;
            dp[n-1]=1;
            return;
        }
        if(i>n || dp[i]!=-1){
            return;
        }
        solve(dp,i+1,n);
        dp[i]=dp[i+1]+dp[i+2];
        return;
    }

    int iterative(int n){
        // vector<int>dp;
        int temp1=1;
        int temp2=1;

        for(int i=n-2;i>=0;i--){
            int curr=temp1+temp2;
            temp1=temp2;

            temp2=curr;
            
        }
        cout<<temp1<<" "<<temp2;;

        return temp2;;
    }
    int climbStairs(int n) {
        //1
        // vector<int>dp(n+2,-1);
        // int i=0;
        // solve(dp,i,n);
        // for(auto it:dp){
        //     cout<<it<<" ";
        // }
        // return dp[0];


        //2
        return iterative(n);

    }
};