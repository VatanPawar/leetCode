// Last updated: 7/11/2025, 12:07:12 AM
class Solution {
public:

    int pivotIndex(vector<int>& nums) { 
    int n= nums.size();
       int total=0;
       int left=0;
       for(auto it:nums){
        total+=it;
       }
       for(int i=0;i<n;i++){
        total = total-nums[i];
        left=left+nums[i];
        if(left-nums[i]==total){
            return i;
        }
       }
       return -1;
    }
};