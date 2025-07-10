// Last updated: 7/11/2025, 12:10:02 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans=ans^it;
        }
        return ans;
    }
};