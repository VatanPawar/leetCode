// Last updated: 7/11/2025, 12:03:01 AM
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
         int ans=0;
         int i=0;
         for(auto it:nums){
            if(__builtin_popcount(i)==k){
                // cout<<it<<endl;
                ans+=it;
            }
            i++;
         }
         return ans;
    }
};