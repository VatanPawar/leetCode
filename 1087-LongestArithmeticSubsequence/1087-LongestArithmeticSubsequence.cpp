// Last updated: 7/11/2025, 12:05:53 AM
class Solution {
public:
// unordered_map<int, unordered_map<int, unordered_map<int, int>>> mp;

// int solve(int n,int diff,int currIdx,vector<int>&arr){
//     if(n==0){
//         return 0;
//     }
//     if (mp[currIdx][n].find(diff) != mp[currIdx][n].end()) {
//     return mp[currIdx][n][diff];
// }


//     if(currIdx==-1||(arr[currIdx]-arr[n-1]==diff)){
//         int inc=1+solve(n-1,diff,n-1,arr);
//         int exc=0+solve(n-1,diff,currIdx,arr);
//         return  mp[currIdx][n][diff]=max(inc,exc);
//     }
//     return  mp[currIdx][n][diff]=solve(n-1,diff,currIdx,arr);

// }
vector<vector<int>>t;
int solve(int n,int diff,int currIdx,vector<int>&arr){
    if(n==0){
        return 0;
    }
   if(t[n][currIdx+1]!=-1){
    return t[n][currIdx+1];
   }


    if(currIdx==-1||(arr[currIdx]-arr[n-1]==diff)){
        int inc=1+solve(n-1,diff,n-1,arr);
        int exc=0+solve(n-1,diff,currIdx,arr);
        return  t[n][currIdx+1]=max(inc,exc);
    }
    return  t[n][currIdx+1]=solve(n-1,diff,currIdx,arr);

}
   int longestArithSeqLength(vector<int>& nums) {
    int n = nums.size();
    vector<unordered_map<int, int>> dp(n);
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            int diff = nums[i] - nums[j];
            int len = 1;
            if (dp[j].count(diff)) {
                len = dp[j][diff];
            }
            dp[i][diff] = len + 1;
            ans = max(ans, dp[i][diff]);
        }
    }
    return ans;
}

};