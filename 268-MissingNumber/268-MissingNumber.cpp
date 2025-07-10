// Last updated: 7/11/2025, 12:09:06 AM
class Solution {
public:
 int missingNumber(vector<int>& nums) {


      int ans=0;
      for(int i =0;i<nums.size();i++){
        ans=ans^nums[i];
      }
      for(int i=0;i<=nums.size();i++){
        ans=ans^i;
      }
      return ans;
    }


// int solveMM(vector<int> &nums){
//     vector<int> check(nums.size()+1,0);
//     for(int i=0;i<nums.size();i++){
//     check[nums[i]]=-1;
//     }
//     for(int i=0;i<=nums.size();i++){
//     if(check[i]==0){
//         return i;
//     }
//     }
//     return -1;

//     }

// int missingNumber(vector<int>& nums) {
//      return solveMM(nums);
//     }
};