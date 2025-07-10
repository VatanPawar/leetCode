// Last updated: 7/11/2025, 12:09:10 AM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroIdx=-1;
        int pro=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroIdx=i;
                count++;
            }
            else{
                pro*=nums[i];
            }
        }
        if(count>1){
            return vector<int>(nums.size(),0);
        }
        if(zeroIdx!=-1){
               for(int i=0;i<nums.size();i++){
            nums[i]=0;
        }
            nums[zeroIdx]=pro;
        return nums;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=pro/nums[i];
        }
        return nums;
    }
};