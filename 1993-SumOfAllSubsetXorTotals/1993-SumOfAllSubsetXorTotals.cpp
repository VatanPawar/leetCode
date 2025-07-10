// Last updated: 7/11/2025, 12:04:16 AM
class Solution {
public:
// SIMPLE APPROACH
// int sum=0;
// void solve(vector<int>& nums, int i, vector<int>& temp){
//     if(i>=nums.size()){
//         int xr=0;
//         for(int i=0;i<temp.size();i++){
//             xr = xr^temp[i];
//         }
//         sum += xr;
//         return;
//     }
//     temp.push_back(nums[i]);
//     solve(nums,i+1,temp);
//     temp.pop_back();
//     solve(nums,i+1,temp);
// }
//     int subsetXORSum(vector<int>& nums) {
//         vector<int>temp;
//         solve(nums,0,temp);
//         return sum;  
//     }


// APPROACH-2
// int solve(vector<int>&nums, int i, int xr){
//     if(i>=nums.size()){
//         return xr;
//     }
//     int take=solve(nums,i+1,xr^nums[i]);
//     int not_take=solve(nums,i+1,xr);
//     return take+not_take;
// }
// int subsetXORSum(vector<int>& nums){
//     return solve(nums,0,0);
// }

// APPROACH-3 BIT MANIPULATION
int subsetXORSum(vector<int>& nums){
    int n=nums.size();
    int result=0;
    for(int i=0;i<n;i++){
        result = result | nums[i];
    }
    return (result<<(n-1));
}
};