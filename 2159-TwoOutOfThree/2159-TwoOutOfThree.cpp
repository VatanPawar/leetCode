// Last updated: 7/11/2025, 12:04:05 AM
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        // Keep track, which num is in which array
        vector<int> given(101, 0); // First bit: nums1, second bit: nums2, third bit: nums3
        for(int num : nums1) given[num] |= 1;
        for(int num : nums2) given[num] |= 2;
        for(int num : nums3) given[num] |= 4;
        
        // Get all nums, in more than two arrays
        vector<int> result;
        for(int i = 1; i <= 100; ++i) 
       { if(given[i] == 3 || given[i] == 5 || given[i] == 6 || given[i] == 7) 
            {result.emplace_back(i);}
    }
        return result;
    }
};