// Last updated: 7/11/2025, 12:06:31 AM
class Solution {
public:
bool checkInc(vector<int>nums){
     for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                return 0;
            }
        }
    return 1;
}
bool checkDec(vector<int>nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]>nums[i]){
            return 0;
        }
    }
    return 1;
}
    bool isMonotonic(vector<int>& nums) {
       
        return checkInc(nums)||checkDec(nums);
    }
};