// Last updated: 7/11/2025, 12:05:25 AM
class Solution {
public:
vector<vector<int>>t;
    int solve(int n,int preIdx,vector<int> &arr, int &diff){
        if(n==0){
            return 0;
        }
        if(t[n][preIdx+1]!=-1){
            return t[n][preIdx+1];
        }
        int inc=0;
        int exc=solve(n-1,preIdx,arr,diff);
        if(preIdx==-1 || (arr[preIdx]-arr[n-1])==diff){
            inc=1+solve(n-1,n-1,arr,diff);
        }
        return t[n][preIdx+1]=max(inc,exc);
    }
 
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> dp;
        int maxLen = 0;

        for (int x : arr) {
            dp[x] = dp[x - difference] + 1;
            maxLen = max(maxLen, dp[x]);
        }

        return maxLen;
    }


};