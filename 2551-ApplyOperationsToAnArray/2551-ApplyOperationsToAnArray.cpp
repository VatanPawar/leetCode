// Last updated: 7/11/2025, 12:03:31 AM
class Solution {
public:
void moveZeroes(vector<int>& nums) {
    int lastNonZero = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[lastNonZero]);
            lastNonZero++;
        }
    }
}

    vector<int> applyOperations(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i+1<nums.size()&&nums[i]==nums[i+1]){
                ans.push_back(2*nums[i]);
                ans.push_back(0);
                i++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        // int l=0;int r=nums.size()-1;
       moveZeroes(ans);
        
        return ans;
    }
};