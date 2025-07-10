// Last updated: 7/11/2025, 12:03:49 AM
class Solution {
public:
    bool divideArray(vector<int>& nums) {
         bitset<501> bit; 

        for (int num : nums) {
            bit[num] =!bit[num];
        }

        return bit.none();
    }
};