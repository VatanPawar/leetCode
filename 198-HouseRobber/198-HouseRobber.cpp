// Last updated: 7/11/2025, 12:09:36 AM
class Solution {
public:
int solve(vector<int>&nums,int i){
    //bc
    if(i>=nums.size()){
        return 0;
    }
    //1case

    //inc-exc
    int include = nums[i]+solve(nums,i+2);
    int exclude = 0+solve(nums,i+1);
    int finalAns=max(include,exclude);
    return finalAns;
 }


 //top-down - rec + meomoisation
 int solveMemoisation(vector<int>nums,int i,vector<int>&dp){
    //bc
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int include = nums[i]+solveMemoisation(nums,i+2,dp);
    int exclude = 0+solveMemoisation(nums,i+1,dp);
     dp[i]=max(include,exclude);
    return dp[i];
    
 }


  int solveUsingTabulation(vector<int>nums){
    //bc
    // step 1
    vector<int>dp(nums.size()+20,0);

    //step 2
    dp[nums.size()]=0;
    int n=nums.size();

    //step3
    for(int i=n-1;i>=0;i--){
        //include exclude pattern
        int include= nums[i] + dp[i+2];
        int exclude= 0 + dp[i+1];
        dp[i]=max(include,exclude);
    }
     
    return dp[0];
    
 }


    int solveUSingTabSpaceO(vector<int>nums){
        int n=nums.size();
        int next1=0;
        int next2=0;

        for(int i=nums.size()-1;i>=0;i--){
            int include= nums[i]+next2;
            int exclude = 0 +next1;
            int curr=max(include,exclude);

            //shifting
            next2=next1;
            next1=curr;

        }
        return next1;
    }

 
    int rob(vector<int>& nums) {
        // vector<int>dp(nums.size()+1,-1);
        // int i=0;
        // return solveMemoisation(nums,0,dp);
        return solveUSingTabSpaceO(nums);
    }
};